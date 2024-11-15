/*
    Write a program that allows a user to input two words. Compare these words to see if
    they are the same. Display appropriate messages whether or not the two words are the
    same.
*/

#include <stdio.h>
#include <string.h>

#define WORD 20

int main()
{
    char input1[WORD];
    char input2[WORD];
    int check;


    printf("Enter your first word\n");
    scanf("%s",input1);
    printf("Enter your second word\n");
    scanf("%s",input2);

    check = strcmp(input1, input2);

    if (check == 0)
    {
        printf("\nthe words are identical");
    }
    else if (check == -1)
    {
        printf("\nthe words are different");
    }
    else
    {
        printf("\nSomething went wrong");
    }    

    return 0;
}