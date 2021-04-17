#include <stdio.h>
#include <string.h>  // LOL

int main()				     
{
    // Do not touch
    char three[10] = "3";
    char fortyOne[10] = "41";
    char cos[10] = "COS";
    char is[10] = "IS";
    char fortyOneEyeS[10] = "41 IS";
    char results[1000];
    char varThreeFortyOneCos[100];

    // Step 1: Using strcat(), concat strings together until you have a string inside the result character array that reads "341 COS" (with space)
    // CODE GOES HERE
    strcat(results, three);
    strcat(results, fortyOne);
    strcat(results, " ");
    strcat(results, cos);

    // Do not touch
    printf("%s\n", results);


    // Step 2: Using strcpy(), copy the contents of results to varThreeFortyOneCos 
    // CODE GOES HERE
    strcpy(varThreeFortyOneCos, results);
    

    // Step 3: Write an if..else statement to compare (use strcmp()) result with varThreeFortyOneCos. Print "match" if they match and "no match" if they do not
    // CODE GOES HERE
    if (strcmp(varThreeFortyOneCos, results) == 0){
        printf("match\n");
    }
    else{
        printf("no match\n");
    }

    // Step 4: Using strlen(), print the length of results
    // CODE GOES HERE
    printf("%zu\n", strlen(results));

    return 0;

    /* Output
    341 COS
    match
    7
    */

}				                        