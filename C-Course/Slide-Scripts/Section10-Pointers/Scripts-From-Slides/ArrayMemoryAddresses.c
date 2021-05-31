#include <stdio.h>
int main() {
    int x[5];
    int i;

    for(i = 0; i < 5; ++i) {
        printf("&x[%d] = %p\n", i, &x[i]);
    }

    printf("Address of array x: %p\n", x);

    return 0;
}