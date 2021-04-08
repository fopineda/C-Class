#include <stdio.h>

int main()
{


    int x=5, y=6, *p;
    // x means this is the value set to x
    // *p means use the value inside p as a memory address and well go to it
    // &x means that this value is the memory address of x and not the value set to x


    p = &x;   // p = memory address of x                      
    printf("1.  x=%d, y=%d, *p=%d\n", x, y, *p); // p: <ADDRESS>; *p: 5


    x = 7;
    printf("2.  x=%d, y=%d, *p=%d\n", x, y, *p); // p: <ADDRESS>; *p: 7


    *p = 8;
    printf("3.  x=%d, y=%d, *p=%d\n", x, y, *p);
    // The assignment of '*p = 8' means that x will now equal 8.
        // '*p = 8' means use the value inside p (&x) as a memory address and go to it. Now that you are at that memory address set it 8 
        // which also sets x = 8


    p = &y;
    printf("4.  x=%d, y=%d, *p=%d\n", x, y, *p);


    *p += 10 * (x * *p);
    printf("5.  x=%d, y=%d, *p=%d\n", x, y, *p);
    // Order of Operations take place here
    // *p = 6 + 10 * (8 * 6)  // Parenth is done first
    // *p = 6 + 10 * 48      // Multiplication is done second
    // *p = 6 + 480         // addition is done third
    // *p = 486            // current the 'p = &y' so it goes to the memory address of y and sets the value of that space to 486, thus setting y = 486
                            // Also sets *p = 486

}

