/*
    Write a program using an array that will allow the user to input 3 temperature
    readings in Fahrenheit. After all the temperatures have been read from the keyboard,
    display each of these temperatures on the screen and its corresponding temperature in
    Celsius.

    Celsius = (Fahrenheit - 32.0) * (5.0 / 9.0)
*/

#include <stdio.h>

#define SIZE 3


int main()
{
    int arr[SIZE];
    int arc[SIZE];
    int i = 0;


    // reads in value 
    printf("Enter 3 temperature values in Fahrenheit:\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }

    // values are converted to celsius
    for (i = 0; i < SIZE; i++)
    {
        arc[i] = (arr[i] - 32)*(5.0 / 9.0);
    }

    // prints the values in fahrenheit 
    for (i = 0; i < SIZE; i++)
    { 
        printf("\n%d degrees fahrenheit equals %d degrees celsius",arr[i], arc[i]);
    }
    
    return 0;    
}
