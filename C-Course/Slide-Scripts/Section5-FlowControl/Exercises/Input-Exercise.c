#include <stdio.h>

int main()				              
{
    // Do not touch
    int myNumber;
    float myFloat;
    double myDouble;
    char myChar;


    // Step 1: under each printf(..) statement there needs to be a scanf(...) statement reading in whatever the user inputted. 
        // Remember scanf takes in 1 or more parameters
        // Hint: It's takes two here
    printf("Give me an int number: ");
    // CODE GOES HERE
    printf("Give me a float number: ");
    // CODE GOES HERE
    printf("Give me a double number: ");
    // CODE GOES HERE
    printf("Give me a single character: ");
    // CODE GOES HERE (this one is a bit tricky ;D )

    
    // Do not touch
    printf("Actually, I don't want them anymore here you go: %d, %.2f %lf, %c \n", myNumber, myFloat, myDouble, myChar);

    /* Output ex
    Give me an int number: 25
    Give me a float number: 3.14
    Give me a double number: 3.1456
    Give me a single character: F
    Actually, I don't want them anymore here you go: 25, 3.14 3.145600, F 
    */
    
    
    return 0;								
}	