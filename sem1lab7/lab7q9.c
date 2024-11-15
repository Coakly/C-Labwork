/*
    Write the program to input values to a 4 by 5 array, search the array for values that are less than 0 and display
    these values along with their row and column indices
*/

#include <stdio.h>

#define ROW 4
#define COL 5

int main()
{
    int arr[ROW][COL];
    int i, j = 0;


    printf("Please enter %d values:\n",ROW*COL);
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if(arr[i][j] < 0)
            {
                printf("\n%d is negative.\nIt's row is %d, it's column is %d\n",arr[i][j],i,j);
            }
        }
    }

    return 0;
}