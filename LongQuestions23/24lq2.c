/*
    Write a C program that asks the user to enter a string using standard input (the
    maximum characters allowed is 20). Your program should check if the string is a
    palindrome. A palindrome is any string that is spelled the same way backwards, e.g.,
    “radar”, “kayak”, “rats live on no evil star”.

    If the string is a palindrome, display the word “yes” to standard output, otherwise
    display “no”.
    No validation (error-checking) is required.

    (20 marks)
    (b) Show how you would modify your program in part (a) to concatenate your string to the
    following string literal:
    “You entered: “
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 21

int main()
{
    char input[SIZE];
    char bkwrds[SIZE];
    char literal[SIZE+SIZE] = "You entered: ";
    int i, j;
    int check = 20;


    // get userinput string
    printf("Enter a string of no more than 20 characters:\n");
    fgets(input, SIZE-1, stdin);

    // remove newline character
    input[strcspn(input, "\n")] = '\0';

    // save userinp in bkwrds and reverse
    strcpy(bkwrds,input);
    strrev(bkwrds);

    printf("\n%s - %s\n",input, bkwrds);

    // compare the two strings to see if they are a palindrome or not
    check = strcmp(input, bkwrds);

    // concatenating the input string to the end of literal
    strcat(literal, input);

    printf("%s",literal);


    printf("\n%d",check);
    if (check == 0)
    {
        printf("\nYes %s is a palindrome!",input);
    }
    else
    {
        printf("\nNo, %s is not a palindrome.",input);
    }

    return 0;
}