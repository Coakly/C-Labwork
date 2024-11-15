/*
    Passing 1-D Array. 
    
    Write a program that uses a function to find the highest number in an array containing 5 numbers. 
    In the main(), you must ask the user to enter 5 numbers and store these in the array. 
    
    Pass the array to a function and your function must find the highest number. 
    Return this number to your main() and display it.
*/

#include <stdio.h>


#define SIZE 5


// function sig
int sort(int *);


int main()
{
    int array[SIZE];
    int *ptr;
    int i = 0;
    int output;


    // assigns ptr to array[]
    ptr = array;

    // printf prompting users 
    printf("Enter 5 numbers\n");

    // read values into array[]
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d",&array[i]);
    }

    // call sort() and highest value of array is stored in 'output'
    output = sort(ptr);

    // prints the highest 
    printf("\n\nThe highest number entered was: %d",output);

    // end program
    return 0;
}

int sort(int *arr)
{
    int i = 0;
    int high = 0;


    high = *(arr + 0);

    for (i = 0; i < SIZE; i++)
    {
        if (high < *(arr + i))
        {
            high = *(arr + i);
        }
    }
    
    return high;
}