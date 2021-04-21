#include <stdio.h>
#include <string.h>

int main()				     
{
    char str1[20] = "Vikings gang";
    char str2[20];

   // copying str1 to str2
    strcpy(str2, str1);
    
    printf("%s\n", str1); // Vikings gang
    printf("%s\n", str2); // Vikings gang

    return 0;


}				                        