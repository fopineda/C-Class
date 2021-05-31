#include <stdio.h>
int main() {
    int x[5] = {1,200,3,4,5};
    int *ptrX = &x[0];

    *(ptrX+2) = 300;

    printf("x[0]: %d\n", *(ptrX)   );
    printf("x[1]: %d\n", *(ptrX+1) );
    printf("x[2]: %d\n", *(ptrX+2) );
    printf("x[3]: %d\n", *(ptrX+3) );
    printf("x[4]: %d\n", *(ptrX+4) );








    return 0;
}