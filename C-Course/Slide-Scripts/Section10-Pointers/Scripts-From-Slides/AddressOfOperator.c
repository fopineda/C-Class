#include <stdio.h>

int main()				     
{
    
    int number;
    printf("%p", &number); // Macbook: 0x7ffeeb521728

    int number2;
    printf("\n%p", &number2); // Macbook: 0x7ffeeb521724

    int number3;
    printf("\n%p", &number3); // Macbook: 0x7ffeeb521720
    
    

    return 0;

}				                        