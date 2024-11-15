/*
    Write a program that reads a sentence from standard input and uses separate functions
    to do the following:
    a) Calculates the number of characters in the sentence.
    b) Appends the sentence to the end of the following string: “My sentence is : “
*/

#include <stdio.h>
#include <string.h>


#define SIZE 100


// func sigs
void a(char *); // Calculates the number of characters in the sentence.
void b(char *); // Appends the sentence to the end of the following string: "My sentence is :"

int main()
{
    char input[SIZE];
    char *ptr;


    ptr = input;

    //prompts user input
    printf("Input a sentence:\n");

    //read user sentence
    fgets(ptr, SIZE, stdin);

    // function call calculates the number of characters in the sentence.
    a(ptr);

    // function call appends the sentence to the end of the following string: "My sentence is :"
    b(ptr);

    return 0;
}

void a(char *sent)
{
    int i;
    int tick = 0;


    // until a null character is reached
    for (i = 0; i < SIZE; i++)
    {
        if (*(sent+i) == '\0' && *(sent+(i+1)) == '\0')
        {
            break;
        }
        
        tick++;
    }
    
    
    printf("\nThe number of characters in the sentence is %d",tick-1);

    return;
}

// Appends the sentence to the end of the following string: “My sentence is : “
void b(char *sent)
{
    printf("\n\nMy sentence is:");

    fputs(sent, stdout);

    return;
}