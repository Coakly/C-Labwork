/*
    Write a program that uses an array to enter 5 integer numbers. Copy the contents of
    this array into another array (using only a loop !!).
*/

#include <stdio.h>

#define SIZE 5

int main()
{
    int arr1[SIZE];
    int arr2[SIZE];
    int i = 0;


    printf("Enter 5 integers\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr1[i]);
        arr2[i] = arr1[i];
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("%d,",arr2[i]);
    }
    
    
    return 0;
}