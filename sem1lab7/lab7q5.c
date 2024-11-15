/*
    Write a program to input numbers to two one-dimensional arrays, each having five elements
    Display the results of multiplying corresponding elements together.
*/

#include <stdio.h>

#define SIZE 5

int main()
{
    int arr1[SIZE];
    int arr2[SIZE];
    int res[SIZE];
    int i = 0;


    printf("Enter %d elements into the first array:\n",SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("\n\nEnter %d elements into the second array:\n",SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr2[i]);
    }


    printf("\nThe arrays multiplied:\n");
    for (i = 0; i < SIZE; i++)
    {
        res[i] = arr1[i] * arr2[i];
        printf("%d x %d = %d\n",arr1[i], arr2[i], res[i]);
    }
    
    return 0;
}