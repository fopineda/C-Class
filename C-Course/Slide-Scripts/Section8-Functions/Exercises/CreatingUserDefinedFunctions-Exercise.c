#include <stdio.h>

// Create a program that asks the user to enter two numbers (seperated by a space), adds them together, and then prints the result
// The code below works, but let's use a function to create a more readable, modular, and efficient program...


// Step 1: Create the function prototype
// CODE GOES HERE
int addNumbers(int a, int b);         

int main()
{
    
    // Do not touch
    int n1,n2,sum;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    // Step 3: Create the function caller (AKA call the function)
    // CODE GOES HERE
    sum = addNumbers(n1, n2);  
    printf("sum = %d\n",sum);

    return 0;
}

// Step 2: Create the function definition
// CODE GOES HERE
int addNumbers(int a, int b)            
{
    int result;
    result = a+b;
    return result;                  
}


/* Ex Output
Enters two numbers: 12 25
sum = 37
*/