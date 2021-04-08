// Program to create a simple calculator
#include <stdio.h>

int main() {
    // Do not touch
    char flag;

    // Do not touch
    printf("\nWelcome to your virtual dog :D");
    printf("\n f : Feeds your dog \n w : Walks your dog \n s : scratch your dog\'s belly \n b : brush your dog");
    printf("\n\nEnter a flag: ");
    scanf("%c", &flag);

    // Create 4 cases for each of the chars (f,w,s,b) and print out the appropiate message
        // f : "Feeding your doggo"
        // w : "Walking your doggo"
        // s : "Scratching your doggo's belly"
        // b : "Brushing your doggo"
    // Also create a default that prints "Error! flag is not correct. You don't love your dog :/"
    // So 4 cases and a default total
    // Make sure your break after each case
    // You may need to play with the "\n" character in the printf statements. If you add it to the string it write the following stuff on the next line. It's the equivalent to hitting the enter button


    // Do not touch switch part, only inside curly braces
    switch(flag)
    {
        // CODE GOES HERE
        
    }



    /* Output examples

    Welcome to your virtual dog :D
    f : Feeds your dog 
    w : Walks your dog 
    s : scratch your dog's belly 
    b : brush your dog

    Enter a flag: f

    Feeding your doggo

    -------------------------------- Run program again --------------------------------

    Welcome to your virtual dog :D
    f : Feeds your dog 
    w : Walks your dog 
    s : scratch your dog's belly 
    b : brush your dog

    Enter a flag: w

    Walking your doggo

    -------------------------------- Run program again --------------------------------

    Welcome to your virtual dog :D
    f : Feeds your dog 
    w : Walks your dog 
    s : scratch your dog's belly 
    b : brush your dog

    Enter a flag: s

    Scratching your doggo's belly

    -------------------------------- Run program again --------------------------------

    Welcome to your virtual dog :D
    f : Feeds your dog 
    w : Walks your dog 
    s : scratch your dog's belly 
    b : brush your dog

    Enter a flag: b

    Brushing your doggo

    -------------------------------- Run program again --------------------------------

    Welcome to your virtual dog :D
    f : Feeds your dog 
    w : Walks your dog 
    s : scratch your dog's belly 
    b : brush your dog

    Enter a flag: 5
    Error! flag is not correct. You don't love your dog :/ 
    
    */


    return 0;
}
