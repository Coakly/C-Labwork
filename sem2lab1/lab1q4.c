/*
    Write a program that uses 2 functions called sum() and average(). 
    Your program must ask the user to enter 3 numbers inside the main(). 
    Your main() should then pass these 3 values as parameters to the function sum(). 
    This function should calculate the sum of the 3 numbers. 
    Your function sum() should then pass the sum of the 3 numbers as a parameter to the function average(). 
    The function average() should then calculate the average of the 3 numbers and display this on the screen.
*/

#include <stdio.h>

void sum(int, int, int); 
void average(int);

int main()
{
    int num1, num2, num3 = 0;


    printf("Enter 3 numbers:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    sum(num1, num2, num3);

    return 0;
}

void sum(int n1, int n2, int n3)
{
    int sum = 0;


    sum = n1 + n2 + n3;
    average(sum);

    return; 
}

void average(int sum)
{
    int avg = 0;


    avg = sum / 3;
    printf("\nThe sum of the 3 numbers entered was %d, the average of the 3 numbers was %d",sum,avg);

    return;
}