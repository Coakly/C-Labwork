/*
Passing 1-D Array. 
Write a program that asks the user to enter 5 numbers fro standard input. 

Pass the array to a function where the function checks each number i the array if it is even or odd. 
Your function should display each number and state whether it is even or odd. 

Finally, your function should calculate the total number of even numbers only 
and return this number to your main() and display it
*/

#include <stdio.h>


#define SIZE 5


// func sigs
int evenodd(int *);


int main()
{
    int i;
    int arr[SIZE];
    int output;
    int *ptr;


    // *ptr = arr[0]
    ptr = arr;

    // prompt user for number entry
    printf("Enter 5 numbers:\n");

    // forloop allows data entry into arr[]
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    // call evenodd, output recieves total number of even numbers plaed in arr[]
    output = evenodd(ptr);

    // prints contents of output
    printf("\n\ntotal number of even number = %d",output);

    return 0;
    
}

int evenodd(int *a)
{
    int i;
    int even = 0;


    for (i = 0; i < SIZE; i++)
    {
        if(*(a+i) % 2 == 0)
        {
            printf("\n%d is even",*(a+i));
            even++;
        }
        else
        {
            printf("\n%d is odd",*(a+i));
        }
    }
    
    return even;
}
