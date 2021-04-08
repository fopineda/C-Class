#include <stdio.h>


int main()        /*** check if a number is odd or even ***/
{
    int i;
    scanf("%d", &i);
    if (i%2 == 0)                /** OR   if (!(i%2))  **/
        printf("number is even\n");
    else 
        printf("number is odd\n");
}