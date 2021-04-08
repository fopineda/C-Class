#include <stdio.h>

int main() {

    // Do not touch
    int count;

    // Step 1: Create an If statement that checks if the current count is 12, if so then make sure it skips the printf (it would normally print out as it's even)
    // Step 2: Create an If statement that checks if the current count is 18, if so then make sure it kills the loop then and there (it would normally print out it's even) 
        // but continues execution after the loop (i.e print out "We don't get along with 18 :)")
    // The two if statement must go inside the For Loop, but where tho? :P
    // Note: There's a big reason why there's a printf statement at the end of the for loop. Can anyone tell me why? o___O

    for (count = 1; count <= 20; ++count){
        
        if (count % 2 == 0) {
            printf("%d\n", count);
        }
        
    }
    // Do not touch
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


    return 0;
}