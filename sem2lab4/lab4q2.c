/*
    write a program to read in your name and display it with a space between each letter
*/

#include <stdio.h>


#define SIZE 10


int main()
{
    char name[SIZE];
    int i;


    printf("Enter your name\n");

    fgets(name, SIZE, stdin);

    for (i = 0; i < SIZE; i++)
    {
        printf("%c ",name[i]);
    }
    
    return;
}