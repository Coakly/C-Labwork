/*
    Ask the user to enter 2 characters. Display these on the screen. Change your code and
    see what happens if you use %d as the delimiter for displaying these letters.

    Q: What happens if you press the Space key or hit Enter twice when entering a letter?
    
    Change your code and use %1s instead of %c in your scanf(). Does this fix the
    problem? Try
*/

#include <stdio.h>

int main()
{
    char char1, char2 = '0';


    printf("Please enter your first character\n");
    scanf(" %c",&char1);
    fflush;
    printf("\nPlease enter your second character\n");
    scanf(" %c",&char2);

    printf("Characters entered are: '%s' & '%s'",char1, char2);

    return 0;
}