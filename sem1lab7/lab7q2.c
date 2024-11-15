/*
    Write a program that uses a 3x2 (2-D) array. Your program must do the following:
    a) Enter values into the array
    b) Display the values in the array
    c) Find the smallest & largest value and display both to standard output
    d) Calculate the average of the values and display to standard output
*/

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int arr[ROW][COL];
    int i, j;
    int small, large = 0;
    int sum = 0;


    printf("please enter values for arr\n");
    // nested forloop to read values into arr[][]
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    // display values of arr[][]
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\n%d",arr[i][j]);
        }
    }

    // find the smallest & largest value and display both to standard output
    small = arr[0][0];
    large = arr[0][0];
    
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (small > arr[i][j])
            {
                small = arr[i][j];
            }
            
            if (large < arr[i][j])
            {
                large = arr[i][j];
            }
        }
    }
    
    // calculate the average of the values and display to standard output
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    sum = sum / (ROW * COL);
    printf("\n\nThe average number inputted = %d",sum);
    
    return 0;
}