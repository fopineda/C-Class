#include <stdio.h>
#include <string.h>

int main()				     
{
    char str1[20] = "Vikings gang";
    char str2[20] = "Dragons gang";
    char str3[20] = "Vikings gang";

    int VtoV = strcmp(str1,str3); // 1
    int VtoD = strcmp(str1, str2); // 18
    
    printf("%d\n", VtoV); // 1
    printf("%d\n", VtoD); // 18

    return 0;

}				                        