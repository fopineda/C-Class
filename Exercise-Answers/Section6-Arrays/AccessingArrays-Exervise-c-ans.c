#include <stdio.h>
#include <stdlib.h>

int main()				     
{
    // Without touching the array initialization, turn off all the lights in the house (in other words turn the 1s to 0s) 

    // Do not touch
    int house[20] = {1,0,1,1,1,1,0,0,0,1,1,1,0,1,0,0,0,0,0,1};

    
    // Step 1: Write a for loop that'll set all the 1s to 0s
    // CODE GOES HERE
    int absoluteSize = sizeof(house) / sizeof(int);
    for (int i = 0; i < absoluteSize; ++i) {
        if (house[i] == 1){
            house[i] = 0;
        }
    }


    // Do not touch
    int sum = 0;
    for (int i = 0; i < 20; ++i){
        sum += house[i];
    }
    printf("%d\n", sum);


    /* Output
    0
    */

    return 0;

}				                        