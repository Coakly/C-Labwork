/*
    Write a program that uses a 3x2 array. Your program must do the following:
    a) Enter in values for each element in the array.
    b) Calculate and display the sum of row 0, row 1, and row 2 separately.
    c) Calculate and display the sum of column 0 and column 1 separately.
    d) Find the highest number in the array and display it.
*/

#include <stdio.h>

#define COL 3
#define ROW 2

int main()
{
    int arr[COL][ROW];
    int i, j = 0;
    int sum = 0;


    // (a) Enter values for each element in the array
    printf("\nEnter %d numbers\n",ROW*COL);
    for (i = 0; i < COL; i++)
    {
        for (j = 0; j < ROW; j++)
        {
            printf("Col %d, Row %d =\t",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    // (b) Calculate and display the sum of row 0, row 1, and row 2 separately.
    printf("\n\nEach row summed as follows:");
    for (i = 0; i < COL; i++)
    {
        for (j = 0; j < ROW; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("\nRow %d summed = %d",j,sum );
        sum = 0;
    }
    

    return 0;
}