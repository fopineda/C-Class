// Program to calculate the sum of n numbers entered by the user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i;



    ptr = (int*) calloc(10, sizeof(int));

    for(i = 0; i < 10; ++i) {
        printf("value %d: %d\n", i, *(ptr+i));
    }

    // deallocating the memory
    free(ptr);

    return 0;
}