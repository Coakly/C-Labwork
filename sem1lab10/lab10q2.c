/*
    (i)     Write a program that uses DMA to allocate memory for 5 floating-point numbers.
            You can use either malloc() or calloc().
    
    (ii)    After memory has been allocated for the 5 float numbers, enter these numbers into
            the memory block.
    
    (iii)   Calculate and display the average of the numbers stored in the memory block
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 

int main()
{
    float *ptr1;
    float no_bytes = 0;
    int i = 0;
    float avg = 0;


    // ALLOCATING MEMBLOCK FOR MALLOC
    // part1
    no_bytes = sizeof(float) * SIZE;

    // part2
    ptr1 = malloc(no_bytes);

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
            avg = (avg + *(ptr1+i));
        }
        avg = avg / SIZE;

        printf("The average of all numbers entered is %.3f",avg);
    }
    return 0;
}