#include <stdio.h>

// Function prototype
double myCharFunction(double a);

int main()				     
{
    // Function Call
    double returnValue = myDoubleFunction(3.14);
    print("%lf", returnValue);
    

    return 0;

}				

// Function definition
double myDoubleFunction(double a){
    return a;
}