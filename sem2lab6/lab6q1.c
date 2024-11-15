/*
    Write a C program that reads a string from standard input and uses separate
    functions to do the following:

    (a) Count the number of times a vowel occurs in the sentence.

    (b) Find the number of characters in the string you entered (use a string function).
        Using this number, display the string in reverse.

    (c) Concatenate the string you entered to the end of the following string and display
        the new string:
    
    char sentence[40] = “I entered the string ”
*/

#include <stdio.h>
#include <string.h>


#define LENGTH 40


// function signatures
void a(char *); // Count the number of times a vowel occurs in the sentence.

void b(char *); // Find the number of characters in the string you entered (use a string function).
                // Using this number, display the string in reverse.

void c(char *); // Concatenate the string you entered to the end of the following string and display
                // the new string:
// function signatures end

int main()
{
    char input[LENGTH];
    char *ptr;
    int i;


    // link ptr to input[] 
    ptr = input;
    
    // get user input
    printf("Enter a sentence of no more than 39 characters\n");
    fgets(input, LENGTH, stdin);

    printf("%s",input);

    // function calls
    a(ptr);
    b(ptr);
    //c(ptr);

    return 0;
}

void a(char *input) // Count the number of times a vowel occurs in the sentence.
{
    int i;
    int tick = 0;


    for (i = 0; i < strlen(input); i++) // Use strlen to only iterate over the actual input length
    {
        if ((*(input + i) == 'a') || *(input + i) == 'i' || *(input + i) == 'e' || *(input + i) == 'u' || *(input + i) == 'o' ||
            *(input + i) == 'A' || *(input + i) == 'I' || *(input + i) == 'E' || *(input + i) == 'U' || *(input + i) == 'O') // Handle both uppercase and lowercase vowels
        {
            tick = tick + 1;
        }
    }

    printf("\n\nSentence contains %d vowels.",tick);

    return;
}

void b(char *input) // Find the number of characters in the string you entered (use a string function).
                    // Using this number, display the string in reverse.
{
    int len = 0;
    int i;


    len = strlen(input);

    printf("\n\nThe string listed backwards is: ");

    for (i = len-1; i < len; i--)
    {
        printf("%c", *(input+i));
    }
    
    return;
}