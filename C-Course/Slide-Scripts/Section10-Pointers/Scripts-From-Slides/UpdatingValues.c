#include <stdio.h>

int main()				     
{
    
    int number;
    int *ptrNumber;
    number = 5;

    ptrNumber = &number;

    &number = 10;

    printf("number = %d \n", number);
    printf("ptrNumber = %p \n", &ptrNumber);
    printf("ptrNumber = %p \n", ptrNumber);
    printf("*ptrNumber = %d \n", *ptrNumber);    
    
    

    return 0;

}				                        