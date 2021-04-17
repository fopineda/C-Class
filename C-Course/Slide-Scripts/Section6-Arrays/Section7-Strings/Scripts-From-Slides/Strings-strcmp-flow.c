#include <stdio.h>
#include <string.h>

int main()				     
{
    char str1[20] = "Vikings gang";
    char str2[20] = "Dragons gang";
    char str3[20] = "Vikings gang";

    int VtoV = strcmp(str1,str3); // 0
    int VtoD = strcmp(str1, str2); // 18 (can be something else)
    
    if (VtoV == 0) {
        printf("Viking strings match!\n");
    } 

    if (VtoD != 0){
        printf("Vikings and Dragons strings did not match!\n");
    }


    //     0:	s1 and s2 are equal
    // Negative integer:	The stopping character in s1 was less than the stopping character in s2
    // Positive integer:	The stopping character in s1 was greater than the stopping character in s2

    return 0;

}				                        