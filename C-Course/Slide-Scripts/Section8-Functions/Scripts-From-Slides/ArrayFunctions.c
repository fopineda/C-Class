#include <stdio.h>

// Function prototype
char[] myStringFunction(char[] a);

int main()				     
{
    // Function Call
    char[100] aStringArray = "random string";
    char[] returnValue = myStringFunction(aStringArray);
    print("", returnValue);
    

    return 0;

}				

// Function definition
char[] myStringFunction(char[] a){
    return a;
}