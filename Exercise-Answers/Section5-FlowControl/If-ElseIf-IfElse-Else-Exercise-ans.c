#include <stdio.h>

int main()				              	
{	

    // Step 1: Put the values inside i and letter to get the output: hamburger robot			                        
	int i = 13;
    char letter = 'u';



    if (i < 10){
        printf("fire \n");
        if (letter == 'a'){
            printf("iphone \n");
        }
        else {
            printf("android\n");
        }
    }
    else if (i < 15) {
        printf("hamburger \n");
        if (letter == 'a'){
            printf("iphone \n");
        }
        else {
            printf("robot \n");
        }
    }
    else if ( i < 20) {
        printf("green apple \n");
        if (letter == 'a'){
            printf("iphone \n");
        }
        else {
            printf("android \n");
        }
    }

    else{
        printf("tomato \n");
        if (letter == 'a'){
            printf("iphone \n");
        }
        else {
            printf("android \n");
        }
    }

	return 0;								
}				                        