#include <stdio.h>

int main(int argc, char *argv[])				     
{
    // prints argc
    printf("%d\n", argc);

    // prints argv array
    for (int i=0; i<argc; ++i){
        printf("%s ", argv[i]);
    }
    
    return 0;

}				                        