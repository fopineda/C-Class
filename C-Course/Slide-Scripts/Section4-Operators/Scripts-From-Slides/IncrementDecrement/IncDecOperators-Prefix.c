#include <stdio.h>
int main()
{
    
    int a = 10;
    int z =  ++a;

    printf("%d \n", z); // 11
    printf("%d \n", a); // 11

    return 0;
}