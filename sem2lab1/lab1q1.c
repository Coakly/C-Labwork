/*
    Write a program that uses a function to print 10 stars (*) on a single line. 
    Ensure you declare your function prototype and include adequate comments.
*/

#include <stdio.h>


#define STARS 10


void stars(void);


int main()
{
    printf("Calling 'stars'\n\n");
    stars();
    printf("\n\n'stars' call complete.");
}

void stars(void)
{
    char star = '*';
    int i;


    for (i = 0; i < STARS; i++)
    {
        printf("%c",star);
    }
    
    return;
}