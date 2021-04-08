#include <stdio.h>

int main()
{
    
    int myInt1 = 2147483647;
    // int myInt2 = 2147483648; // WARNING: Converts from long (number is a long value) to int (type is int). Result: -2147483648
    int myInt3 = 32767;
    int myInt4 = 32768; 
    int myInt5 = -2147483648;
    // int myInt6 = -2147483649; // WARNING: Converts from long (number is long value) to int (type is int). Result: 214748367
    // int myInt8 = 1.17549e-38; // WARNING: Converts from double (number is double value) to int (type is int). Result: 0

}