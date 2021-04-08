#include <stdio.h>      
int main() {


    // -32,768 to 32,767
    short int shortInt1 = 32767;
    // short int shortInt2 = 32768; // WARNING

    // -2147483648 to 2147483647
    int normalInt1 = 2147483647;
    // int normalInt2 = 2147483648; // WARNING

    // -9223372036854775808 to 9223372036854775807
    long int longInt1 = 9223372036854775807;
    // long int longInt2 = 9223372036854775808; //WARNING

    // -9223372036854775808 to 9223372036854775807
    long long int longLongInt1 = 9223372036854775807;
    // long long int longLongInt21 = 9223372036854775808; // WARNING

}