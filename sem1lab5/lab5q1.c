/*
    Write a program using a while loop to display the numbers 1 - 10 in descending order
    on the same line and each number separated by a comma e.g., 10,9,8,7,6,5,4,3,2,1
    Note: do not display the comma after the last number
*/

#include <stdio.h>

#define SIZE 1

int main()
{
    int i;


    for (i = 10; i > SIZE; i--)
    {
        printf("%d,",i);
    }
    printf("%d",i);

    return 0;
}