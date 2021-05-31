// Program to calculate the sum of n numbers entered by the user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i;



    ptr = (int*) malloc(10 * sizeof(int));

    for(i = 0; i < 10; ++i) {
        printf("addr %d: %p\n", i,(ptr+i));
    }

    // deallocating the memory
    free(ptr);

    return 0;
}