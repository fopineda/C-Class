#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10;

    printf("%d \n",  a == b);   // 1
    printf("%d \n",  a == c);   // 0
    printf("%d \n",  a > b);    // 0
    printf("%d \n",  a > c);    // 0
    printf("%d \n",  a < b);    // 0
    printf("%d \n",  a < c);    // 1
    printf("%d \n",  a != b);   // 0
    printf("%d \n",  a != c);   // 1
    printf("%d \n",  a >= b);   // 1
    printf("%d \n",  a >= c);   // 0
    printf("%d \n",  a <= b);   // 1
    printf("%d \n",  a <= c);   // 1

    return 0;
}