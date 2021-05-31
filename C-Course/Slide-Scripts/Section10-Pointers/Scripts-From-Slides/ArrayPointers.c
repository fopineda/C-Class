#include <stdio.h>
int main() {
    int x[5];
    int *ptrX = x;
    int *ptrX2 = &x[0];
    int i;

    


    for(i = 0; i < 5; ++i) {
        printf("&x[%d] = %p\n", i, &x[i]);
    }

    printf("Address of array x: %p\n", x);


    printf("%p\n", ptrX);
    printf("%p\n", ptrX2);


    return 0;
}