#include <stdio.h>
int main()
{
    int a = 5, c;

    c = a;      
    printf("c = %d\n", c); // c = 5


    c += a;     // c = c + a
    printf("c = %d\n", c); // c = 10

    c -= a;     // c = c - a
    printf("c = %d\n", c); // c = 5

    c *= a;     // c = c * a
    printf("c = %d\n", c); // c = 25

    c /= a;     // c = c / a
    printf("c = %d\n", c); // c = 5

    c %= a;     // c = c % a
    printf("c = %d\n", c); // c = 0

    return 0;
}