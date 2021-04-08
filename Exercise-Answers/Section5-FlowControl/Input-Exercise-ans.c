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
	scanf("%d", &myNumber);
    printf("Give me a float number: ");
    // CODE GOES HERE
    scanf("%f", &myFloat);
    printf("Give me a double number: ");
    // CODE GOES HERE
    scanf("%lf", &myDouble);
    printf("Give me a single character: ");
    // CODE GOES HERE
    scanf(" %c", &myChar);  // For some reason it takes in the "\n" added to the end of the previous scanf as the char input, thus skipping over it.
                            // Fixes: getCharr or %s (without space)

    
    // Do not touch
    printf("Actually, I don't want them anymore here you go: %d, %.2f %lf, %c \n", myNumber, myFloat, myDouble, myChar);

    return 0;								
}	