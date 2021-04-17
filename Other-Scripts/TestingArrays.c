#include <stdio.h>
#include <stdlib.h>

int main()				     
{
    int mark[5] = {19, 10, 8, 17, 9};

    for (int i = 0; i < 5; ++i) {
        mark[i] = i+1;
    }

    for (int j = 0; j < 5; ++j){
        printf("%d\n", mark[j]);
    }
    
    return 0;

}				                        