/*
    Write a program to enter numbers into an integer array with 3 elements, i.e., the size
    of the array is 3. Your program must sort the array in ascending order (i.e., the first
    element is the smallest and each element after the first is greater than or equal to the
    element before it).
*/

#include <stdio.h>

#define SIZE 3

int main()
{
    int arr[SIZE];
    int hold;
    int i = 0;


    printf("Enter 3 integers into the array:\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }

    while ( (arr[0] > arr[1]) || (arr[1] > arr[2]) )
    {
        if (arr[0] > arr[1])
        {
            hold = arr[0];
            arr[0] = arr[1];
            arr[1] = hold;
        }

        if (arr[1] > arr[2])
        {
            hold = arr[1];
            arr[1] = arr[2];
            arr[2] = hold;
        }
    }

    printf("The array in ascending order is:");
    for (i = 0; i < SIZE; i++)
    {
        printf("\n%d",arr[i]);
    }
    
    
    return 0;
}