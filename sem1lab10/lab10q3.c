/*
    Create a copy of Q2 above. Modify the code so that it does:
    
    Allocate a second memory block and store the average value calculate in part (iii) in this block. 
    Display all of the 5 float values in the first memory block and their average value in the second 
    memory block on the screen.
    
    (Hint: you will need to use 2 float pointers, one pointer to the block of memory
    storing the 5 floating-point numbers, the other pointer to the block of memory storing
    the average of the 5 numbers).
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 

int main()
{
    float *ptr1;
    float no_bytes = 0;
    int i = 0;
    float *avg;


    // ALLOCATING MEMBLOCK FOR MALLOC
    // part1 a
    no_bytes = sizeof(float) * SIZE;

    // part2 a
    ptr1 = malloc(no_bytes);

    // part1 b
    no_bytes = sizeof(float) * 1;

    // part2 b
    avg = malloc(no_bytes);

    // part3
    if(ptr1 == NULL)
    {
        printf("\nFailed to allocate memory");
    }
    else
    {
        printf("\n\nMemory allocated successfully ");
        printf("\nPlease enter the %d numbers you would like to enter into the array\n",SIZE);\
        for (i = 0; i < SIZE; i++)
        {
            scanf("%f",&*(ptr1+i));
        }

        for (i = 0; i < SIZE; i++)
        {
            *avg = (*avg + *(ptr1+i));
        }
        *avg = *avg / SIZE;

        printf("The average of all numbers entered is %.3f",*avg);
    }
    return 0;
}