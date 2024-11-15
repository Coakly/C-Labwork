/*
    Given an array such that:
    char chars[] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    Write a program that replaces all the blank elements in the array with the underline character '_'.
    Use a pointer rather than a subscript
*/

#include <stdio.h>

#define SIZE 8

int main()
{
    char chars[] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    int i = 0;


    printf("The current array:\n");
    // forloop that prints the array as it currently exists:
    for (i = 0; i < SIZE; i++)
    {
        printf("char%d = '%c'\n",i+1,*(chars + i));   
    }
    
    printf("\nProcessing blanks...\n");
    // forloop that runs through each char[] and replaces all blanks with '_'
    for (i = 0; i < SIZE; i++)
    {
        if (*(chars + i) == ' ')
        {
            *(chars + i) = '_';
        }
        
    }
    
    printf("\nThe fixed array:\n");
    // forloop to print the newly corrected array
    for (i = 0; i < SIZE; i++)
    {
        printf("char%d = '%c'\n",i+1,*(chars + i));   
    }

    return 0;
}