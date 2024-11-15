/*
    Write a program that defines an integer array with 5 elements. Your program must do the following:
    • Enter the 5 integer values into the array.
    • Define another integer array with 5 elements and copy the values from the 1st
    array into the second array in reverse order (e.g., the number in the first
    element of the 1st array will be placed in the last element in the 2nd array,
    etc..).
*/

#include <stdio.h>

#define SIZE 5

int main()
{
    int arr1[SIZE];
    int arr2[SIZE];
    int i,j = 0;


    // reading integers into 'arr1'
    printf("Enter 5 integers");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr1[i]);
    }

    // print arr1
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n",arr1[i]);
    }

    // nested loop to insert arr1 values into arr2 in reverse order
    for (i = 0; i < SIZE; i++)
    {
        arr2[i] = arr1[SIZE - 1 - i];
    }
    

    // printloop 
    for (i = 0; i < SIZE; i++)
    {
        printf("\n%d",arr2[i]);
    }
    
    
    return 0;
}