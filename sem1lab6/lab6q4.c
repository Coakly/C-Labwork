/*
    Define an integer array with 4 elements. Write a program that will allow the user to
    enter 4 numbers into this array and do the following:
    • Display the contents of the array to the screen in the same order they were entered.
    • Swap the 1st and 2nd numbers in the array and swap the 3rd and 4th numbers
    in the array. Now display the numbers on the screen using this new order.
*/

#include <stdio.h>

#define SIZE 4

int main()
{
    int arr[SIZE];
    int hold = 0;
    int i = 0;

    
    // printf prompting user to enter 4 integers
    printf("Please enter 4 integers into the array");

    // startfor to fill arr[SIZE]
    for (i = 0; i < SIZE; i++)
    {
        // scanf reads in value for arr[i]
        scanf("%d",&arr[i]);
    }
    // endfor
    
    // startfor to display values in arr[]
    for (i = 0; i < SIZE; i++)
    {
        // printf displays value for arr[i]
        printf("\n%d",arr[i]);
    }
    // endfor

    // swap values of 1st and 2nd
    hold = arr[0];
    arr[0] = arr[1];
    arr[1] = hold;
    
    //swap values of 3rd and 4th
    hold = arr[2];
    arr[2] = arr[3];
    arr[3] = hold;

    // startfor to display values in arr[]
    for (i = 0; i < SIZE; i++)
    {
        // printf displays value for arr[i]
        printf("\n%d",arr[i]);
    }
    // endfor

    return 0; 
}