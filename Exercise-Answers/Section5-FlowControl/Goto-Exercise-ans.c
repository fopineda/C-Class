#include <stdio.h>

int main()
{
    
    // Using the goto <label> statement you just learned, recreate the famous Earth, Wind, & Fire song.
        // The first goto will be outside the label "block" you see below. It's right below this and has "(starting goto)" in the description


    /* Output ex:
        Do you remember, 21st night of September?
    */

    // CODE GOES HERE (starting goto)
    goto d;
    


    // Do not touch
    n:
        printf(" night");
        // CODE GOES HERE
        goto o;
    y:
        printf(" you");
        // CODE GOES HERE
        goto r;
    c:
        printf(",");
        // CODE GOES HERE
        goto t;
    o:
        printf(" of");
        // CODE GOES HERE
        goto s;
    s:
        printf(" September");
        // CODE GOES HERE
        goto q;
    
    d:
        printf("Do");
        // CODE GOES HERE
        goto y;
    q:
        printf("? \n");
        // Do not touch return or it'll look forever lol
        return 0;
    t:
        printf(" 21st");
        // CODE GOES HERE
        goto n;
    r:
        printf(" remember");
        // CODE GOES HERE
        goto c;
    
    
    

    // return 0;
}