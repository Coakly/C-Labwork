/*
    Write a program to do the following:
    • Calculate and display the sum of the integers 1 to 5
    • Calculate and display the average of the following floating-point numbers: 1.0, 1.1, 1.2, ..... 2.0
*/

#include <stdio.h>

int main()
{
    int sum = 0; 
    float avg = 0;


    sum = (1 + 2 + 3 + 4 + 5);
    printf("sum of numbers 1 - 5 equals: %d",sum);

    avg = (1.0 + 1.1 + 1.2 + 1.3 + 1.4 + 1.5 + 1.6 + 1.7 + 1.8 + 1.9 + 2);
    avg = (avg / 11);
    printf("\n\navg of 1.1 to 2.0 is: %f",avg);

    return 0;
}