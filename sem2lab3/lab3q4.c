/*
Passing 1-D Array. 

Make a copy of Q2 above but this time, use your function to change the contents of the array, 
i.e. multiply each number in the array by 2. 

When your function has finished and your program continues in your main(), print the
contents of your array in your main() and see if the changes made to the contents of
the array in your function can be seen. If not, why?
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

    printf("\n\nThe array contains:\n");

    // forloop prints the new contents of the array
    for (i = 0; i < SIZE; i++)
    {
        printf("%f\n", arr[i]);
    }

    return 0;
}

float avg(float *a)
{
    float total, average;
    int i;


    for (i = 0; i < SIZE; i++)
    {
        *(a + i) = (*(a + i) * 2);
    }
    
    average = (total / SIZE);

    return average;
}