#include <stdio.h>

// Function prototype
int myIntFunction(int a);

int main()				     
{
    // Function Call
    int returnValue = myIntFunction(41);
    print("%d", returnValue);
    

    return 0;

}				

// Function definition
int myIntFunction(int a){
    return a;
}