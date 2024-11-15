/*
    Using pointer notation only, write a program that uses 2 floating-point arrays with 3
    elements in each. Enter values into the 1st array. Copy the contents of this array into
    the 2nd array. Display the contents of both arrays.
*/

#include <stdio.h>

#define SIZE 3

int main()
{
    float arr1[SIZE], arr2[SIZE];
    int i = 0;


    printf("Enter %d numbers into arr1\n",SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%f",&*(arr1+i));
    }

    for (i = 0; i < SIZE; i++)
    {
        *(arr2+i) = *(arr1+i);
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("\narr2[%d] = %f",i,*(arr2+i));
    }
    
    return 0;
}