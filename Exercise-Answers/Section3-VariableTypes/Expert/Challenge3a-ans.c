#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {

    // Create 4 variables
        // An int variable called 'a' declared, defined, and initialized to the current year
        // A float variable called 'b' only declared and defined
            // on following line, set the value of 'b' to the pie value but up to 2 decimal places (X.YY)
        // A double variable called 'c' declared, defined, and initialized to the pie value but up to 10 decimal places (X.YYYYYYYYYY)
        // A char variable called 'd' declared, defined, and initialized to the first letter of the your name
        



    int a = 2021; 
    float b;
    b = 3.14;
    double c = 3.1415926535;
    char d = 'F';



    // Do not touch
    printf("%d is the current year.\n", a);
    printf("%.2f is the small version of Pie.\n", b);
    printf("%.10lf is longer version of Pie.\n", c);
    printf("%c is the first letter of my name.\n", d);

}