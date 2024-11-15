/*
    Write a program to find the sum of al integer between 1-99
*/

#include <stdio.h>

#define SIZE 100

int main()
{
    int sum = 0; 
    int i = 0;


    for (i = 0; i < SIZE; i++)
    {
        sum = sum + i;
        printf("sum = %d\n", sum);
    }
    printf("The sum of all integers between 1-99 is %d",sum);

    return 0;
}