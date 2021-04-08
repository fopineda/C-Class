#include <stdio.h>    
int main()
{ 
    // This one is a bit tough so if you need help ask :) 
    // high key felt like it's a CTF exercise lol

    // Step 1: Initialize variables a, b, and c to integer values that make the printf statement identical to the output required
        // Hint: Don't think so hard about what they could be, just look at the obvious thing about the sequence a,b,c. What other sequence could go there?
    
    // There's two ways of doing this. You could brute force it lol but that's not fun. The other way is looking at the expressions below. Work backwards and isolate the comparions
    // If you do that then you'll be able to pick up on a pattern that will tell what a,b,c are

    // Of course, a,b,c could be multiple integers, but what is apparent is the sequence/pattern of them

    // Good luck, and please ask questions if you have any. This one might be one of the toughest ones I've created.

    // Again, all you have to do is init the variables and make sure the output matches the output required (under this)

    /* Output: 
        expression1: 1
        expression2: 0
        expression3: 0
    */


    // CODE GOES HERE
    
    
    
    // Do not touch
    int expression1 = !(a==b);
    int expression2 = ( (b==c) && expression1 ) || 0 ;
    int expression3 = !(0 || ( (b > c) || (c > b)) || expression2);


    // Do not touch
    printf("expression1: %d\n", expression1);
    printf("expression2: %d\n", expression2);
    printf("expression3: %d\n", expression3);

    // Do not touch
    return 0;
}