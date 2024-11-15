/*
    Write a program that counts from one to ten, prints the values on a separate line for
    each, and prints a message stating, "This number is three" and "This number is seven"
    when the count is 3 and when the count is 7 respectively.   
*/

#include <stdio.h>

#define SIZE 10

int main()
{
    int i = 0;


    for (i = 1; i < SIZE+1; i++)
    {
        printf("\n%d",i);

        if (i == 3)
        {
            printf("\tThe number is three");
        }
        if (i == 7)
        {
            printf("\tThe number is seven");
        }
    }

    return 0;
}