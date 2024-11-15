/*
    Write a program to read in 15 integers and display them
    (a) each number on a seperate line'
    (b) on one line, each number seperated by a single space
    (c) as in (b) but in reverse order
*/

#include <stdio.h>

#define SIZE 15


int main()
{
    int arr[SIZE];
    int i;


    printf("Enter 15 numbers:\n");
    for (i = 0; i < SIZE; i++)
    {   
        printf("Num %d:\t",i+1);
        scanf("%d",&arr[i]);
    }

    // (a)
    printf("\n\nDisplaying each number on a seperate line:");
    for (i = 0; i < SIZE; i++)
    {
        printf("\nNum %d = %d",i+1,arr[i]);
    }

    // (b)
    printf("\n\nDisplaying each number seperated by a space:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ",arr[i]);
    }

    // (c)
    printf("\n\nDisplaying each number on a seperate line:");
    for (i = 0; i < SIZE; i++)
    {
        printf("\nNum %d = %d",i+1,arr[SIZE - 1 - i]);
    }
    
    return 0;
}