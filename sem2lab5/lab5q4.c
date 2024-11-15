/*
    Using separate functions for part (a) and (b) below, extend your program in Q3 to do
    the following:
    
    a) Concatenate the first word entered to the end of the string: "First word entered
    is ". Display this entire string on the screen.

    b) Calculate the length of the string in part (a) above and display the number of
    characters used.
*/
#include <stdio.h>
#include <string.h>

#define WORD 25


void a(char *); //Concatenate the first word entered to the end of the string: "First word entered is ". 
                //Display this entire string on the screen.

void b(char *); //Calculate the length of the string in part (a) above and display the number of characters used.

int main()
{
    char input1[WORD];
    char input2[WORD];
    char *ptr;
    int check;


    ptr = input1;

    printf("Enter your first word\n");
    scanf("%s",input1);
    printf("Enter your second word\n");
    scanf("%s",input2);

    check = strcmp(input1, input2);

    // function call to concatenate the word to end of string.
    a(ptr);

    // 
    b(ptr);

    if (check == 0)
    {
        printf("\nThe words are identical");
    }
    else if (check == -1)
    {
        printf("\nThe words are different");
    }
    else
    {
        printf("\nSomething went wrong");
    }    

    return 0;
}

void a(char *word)
{
    char string[WORD*2] = "First word entered is ";


    strcat(string,word);
    printf("\n\n%s",string);

    return;
}

void b(char *word)
{
    int tick = 0;
    int i;


    for (i = 0; i < WORD; i++)
    {
        if ((*(word+i) == '\0') && (*(word+(i+1)) == '\0'))
        {
            printf("\nThere were %d letters in that string", tick-1);
            return;
        }

        tick++;
    }

    printf("\nsome bullshit went wrong");
    
    return;
}