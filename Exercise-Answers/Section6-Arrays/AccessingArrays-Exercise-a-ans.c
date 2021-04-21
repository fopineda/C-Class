#include <stdio.h>
#include <stdlib.h>

int main()				     
{
    // Create an array with the given details and print the specified values

    // Step 1: set the ARRAY below
        // type: int
        // identifer: myIntArray
        // value: {45,7,8,353,57,245,5677,44,5,1,0,24,35,67,6843,34,90,1234,56,2}
    int myIntArray[20] = {45,7,8,353,57,245,5677,44,5,1,0,24,35,67,6843,34,90,1234,56,2};
    // CODE GOES HERE
    
    // Step 2: print the 15th number of array
    printf("%d\n", myIntArray[14]);
    // CODE GOES HERE

    // Step 3: print the first number of array
    printf("%d\n", myIntArray[0]);
    // CODE GOES HERE

    // Step 4: print the 9th number of array
    printf("%d\n", myIntArray[8]);
    // CODE GOES HERE

    // Step 5: print the last number of array
    printf("%d\n", myIntArray[19]);
    // CODE GOES HERE

    // Step 6: add the 4th and 10th number and print it
    printf("%d\n", (myIntArray[3] + myIntArray[9] ));
    // CODE GOES HERE

    // Step 7: print the the number associated with index 13
    printf("%d\n", myIntArray[13]);
    // CODE GOES HERE

    return 0;

    /* Output
    6843
    45
    5
    2
    354
    67
    */

}				                        