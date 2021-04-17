#include <stdio.h>
#include <string.h>

int main()				     
{
    char str1[100] = "Keeping it ", str2[] = "LOKI!";


    strcat(str1, str2);

    printf("%s\n", str1); // Keeping it LOKI!

    return 0;

    /* Output
    
    */

}				                        