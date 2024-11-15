/*
    Given the following arrays:
    float litres[] = {11.5 11.21 12.7 12.6 12.4};
    float miles[] = {471.5 358.72 495.3 453.6 421.6};
    int mpl[5]; // (miles per litre)

    write a program to calculate and display the value of each element of mp l.
    Use pointer notation
*/

#include <stdio.h>

#define SIZE 5

int main()
{    
    float litres[SIZE] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[SIZE] = {471.5, 358.72, 495.3, 453.6, 421.6};
    int mpl[5]; // (miles per litre)
    int i = 0;


    // calculating the value of mpl[i]
    for (i = 0; i < SIZE; i++)
    {
        *(mpl+i) = (*(miles+i) / *(litres+i));
    }

    printf("\nThe mpl's:\n");
    // printing the value
    for (i = 0; i < SIZE; i++)
    {
        printf("\n%d",*(mpl+i));
    }
    
    return 0;
}