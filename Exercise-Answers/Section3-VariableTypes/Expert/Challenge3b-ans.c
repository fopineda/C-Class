#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {


    // Do not touch
    unsigned int a = -2021; 
    char d = 'G';
    char e = 71;



    // Edit the format specifiers to out the following
    /* 

    Oh no, my number changed from -2021 to 4294965275
    G is a letter and the ascii value is 71.
    
    */
    printf("Oh no, my number changed from %d to %u\n", a,a);  // two params
    printf("%c is a letter and the ascii value is %d.\n", d, e); // different version of formats

}