/*
    Show how to initialise two 3x4 arrays (2-Dimensional arrays with 3 rows and 4
    columns in each) when they are declared. In your program, declare a 3 rd 3x4 array.
    
    Multiply each corresponding element in the 1 st and 2 nd array and store this product in
    the corresponding element of the 3 rd array. 
    
    For example, array3[0][0] = array1[0][0] x array2[0][0], array3[0][1] = array1[0][1] x array2[0][1], etc...
*/

#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    int arr1[ROW][COL];
    int arr2[ROW][COL];
    int res[ROW][COL];
    int i, j = 0;


    printf("Enter %d numbers to fill arr1[][]\n",ROW * COL);
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\nRow %d Col %d = ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter %d numbers to fill arr2[][]\n",ROW * COL);
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\nRow %d Col %d = ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("\n\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            res[i][j] = arr1[i][j] * arr2[i][j];
            printf("Arr1[%d][%d] x Arr2[%d][%d] = %d\n",i, j, i, j, res[i][j]);
        }
    }

    
    return 0;
}