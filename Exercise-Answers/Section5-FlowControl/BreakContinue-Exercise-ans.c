#include <stdio.h>

int main() {

    // Do not touch
    int count;

    // Step 1: Create an If statement that checks if the current count is 12, if so then make sure it skips the printf (it would normally print out as it's even)
    // Step 2: Create an If statement that checks if the current count is 18, if so then make sure it kills the loop then and there (it would normally print out it's even) 
        // but continues execution after the loop (i.e print out "We don't get along with 18 :)")
    // Note: There's a big reason why there's a printf statement at the end of the for loop. Can anyone tell me why? o___O

    for (count = 1; count <= 20; ++count){
        
        if (count == 12){
            continue;
        }

        if (count == 18){
            break;
        }

        if (count % 2 == 0) {
            printf("%d\n", count);
        }
        
    }
    printf("We don't get along with 18 :) \n");
    


    /* Output ex:
    2
    4
    6
    8
    10
    14
    16
    We don't get along with 18 :) 
    */

    // Just an FYI on how it would be done in a while loop. Very ugly lol
    // int whileLoopCount = 1;
    
    // while (whileLoopCount <= 20)
    // {

    //     if (whileLoopCount == 12){
    //         ++whileLoopCount;
    //         continue;
    //     }

    //     if (whileLoopCount % 2 == 0) {
    //         printf("%d\n", whileLoopCount);
    //     }
        
    //     // CODE GOES HERE
    //     if (whileLoopCount == 17){
    //         break;
    //     }
    //     ++whileLoopCount;

    // }

    return 0;
}