#include <stdio.h>

// Function prototype
int myIntFunction(int a);

int main()				     
{
    int globalVar = 1;
    
    
    // for loop
    int i;
    for (i = 1; i < 6; ++i)
    {
        int localVar1 = 10;
        continue;
    }

    // if statement
    if (1==1){
        int localVar2 = 15;
    }

    int returnValue = myIntFunction(41);


    printf("My globalVar: %d", globalVar);
    printf("My localvar: %d", localVar1);  // Compile time error
    printf("My localvar: %d", localVar2);  // Compile time error
    printf("My localvar: %d", localVar3);  // Compile time error

    return 0;

    

}				                        


// Function definition
int myIntFunction(int a){
    int localVar3 = 20;
    return a;
}