/*
    Passing 1-D Array. 
    Write a program that uses a function to calculate the average of 5 numbers in an array. 
    
    In the main(), you must ask the user to enter 5 numbers and store these in the array.
    
    Pass the array to a function in which the function calculates the average of these 5 numbers. 
    
    Return the average to your main() and display this.
*/

#include <stdio.h>


#define SIZE 5


// function sig
float avg(float*);

int main()
{
    float arr[SIZE];
    float *ptr;
    float output = 0;
    int i;


    // assign ptr to arr[0]
    ptr = arr;

    // prints prompt for user to enter their 5 numbers
    printf("Enter 5 numbers\n");

    // forloop filling arr[] with user input
    for (i = 0; i < SIZE; i++)
    {
        scanf("%f",&*(ptr + i));
    }
    
    // avg() finds the avg value of arr[] and places that value in 'output'
    output = avg(ptr);

    printf("\n\nThe average value is %f", output);

    return 0;
}

float avg(float *a)
{
    float total, average;
    int i;


    for (i = 0; i < SIZE; i++)
    {
        total = total + *(a + i);
    }
    
    average = (total / SIZE);

    return average;
}