/*
    Write a C program that reads a string from standard input and uses separate
    functions to do the following:

    Compare the string to the following string: “Hello World”.

    Determine the frequency of the word “is” (assuming there is at least one
    occurrence).
*/

#include <stdio.h>
#include <string.h>


#define SIZE 20


// func sigs
void world(char *);  // Compare the string to the following string: “Hello World”.
void is(char *);     // Determine the frequency of the word “is” (assuming there is at least on occurrence).


int main()
{
    char input[SIZE];
    char *ptr;


    // link ptr to input
    ptr = input;

    // determine input
    printf("Enter a string\n");
    fgets(input, SIZE, stdin);

    // function calls
    world(ptr);
    is(ptr);

    return 0;
}

void world(char *ptr)
{
    char world[SIZE] = "Hello World ";
    int result = 0;
    int i = 0;


    result = strcmp(ptr, world);

    printf("%d",result);

    if (result == -1)
    {
        printf("\nString entered by user is identical to \"Hello World\"");
    }
    else if (result == 1)
    {
        printf("\nString entered by user is not identical to \"Hello World\"");
    }
    else
    {
        printf("\nSomething went wrong!");
    }

    return;
}

void is(char *ptr)
{
    
}