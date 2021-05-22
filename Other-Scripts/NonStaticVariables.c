#include <stdio.h>

int ticketsClosed();

int main()				     
{

    printf("%d\n", ticketsClosed()); // 1
    printf("%d\n", ticketsClosed()); // 1
    printf("%d\n", ticketsClosed()); // 1
    printf("%d\n", ticketsClosed()); // 1

    return 0;


}	


int ticketsClosed(){
    int tickets = 0;
    tickets++;
    return tickets;
}