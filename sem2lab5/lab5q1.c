/*
    Write a program to ask a user for their name and then compare with a list of names
    held in an array in memory. 
    If the users name is on the list, display a suitable greeting. 
    If not display the message "Name not found"
*/

#include <stdio.h>

#define SAMP 4
#define SIZE 7

int main()
{
    char names[SAMP][SIZE] = {"Paul", "Mark", "Shane", "Yvonne"};
    char input[SIZE];
    int buul = 0;
    int i;


    // read user's name
    printf("Enter a name\n");
    scanf("%s",input);

    // forloop to check if the name is on the list
    for (i = 0; i < SAMP; i++)
    {
        if (names[i][0] == input[0])
        {
            printf("\n\n%s is on the list!\nHello %s!",input, input);
            buul++;
            break;
        }
    }

    // if the name is not in the list then buul = 0, message is printed stating shizzle
    if (buul == 0)
    {
        printf("%s is not on the list.",input);
    }

    return 0;
}