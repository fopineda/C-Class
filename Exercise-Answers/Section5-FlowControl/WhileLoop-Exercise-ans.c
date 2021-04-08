#include <stdio.h>

int main()
{
    // Step 1: set the variable below
        // type: int
        // identifer: count 
        // value: 1
    // CODE GOES HERE
    int count = 1;  
    

    // Step 2: Create a While Loop that prints out all the even numbers between 1 (count variable) and 20
        // Expression should allow for all numbers between 1 and 20. It will be incrementing one by one and compared to 20
        // Decision-Making statement should check every number (count variable) if it's even (use the hint from the slide)
            // print it out if it's even
        // Increment the count or it will not continue to loop
    // CODE GOES HERE
    while (count <= 20)
    {
        if (count % 2 == 0) {
            printf("%d\n", count);
        }
            
        ++count;   
    }


    /* Output ex:
    2
    4
    6
    8
    10
    12
    14
    16
    18
    20
    */


    return 0;
}