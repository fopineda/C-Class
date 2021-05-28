#include <stdio.h>

#include <string.h>

int main(int argc, char *argv[])				     
{
    if (argc != 4){
        goto notEnoughArgs;
        
    }

    if ( ((strcmp(argv[1], "yankee")) == 0) && ((strcmp(argv[2], "bunny")) == 0) && ((strcmp(argv[3], "towers")) == 0) ) {
        printf("Got it!\n");
        return 0;
    }   
    else {
        goto failed;
    }

    notEnoughArgs:
        printf("The amount of arguments given is off...\n");
        return 0;

    failed:
        printf("nah fam, try again...\n");
        return 0;
    
    

}				                        