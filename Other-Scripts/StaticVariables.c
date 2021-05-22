#include <stdio.h>

int ticketsClosed();

int main()				     
{

    printf("%d\n", ticketsClosed()); // 1
    printf("%d\n", ticketsClosed()); // 2
    printf("%d\n", ticketsClosed()); // 3
    printf("%d\n", ticketsClosed()); // 4

    return 0;


}	


int ticketsClosed(){
    static int tickets = 0;
    tickets++;
    return tickets;
}