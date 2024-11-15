/*
    Write a program top input 3 floats from standard input and calculate their
    (a) Sum
    (b) Average
    Display the results to three decimal places
*/

#include <stdio.h>

int main()
{
    float inp1, inp2, inp3 = 0;
    float sum, average = 0;


    printf("Enter your first input:\t");
    scanf("%f",&inp1);
    printf("Enter your second input:\t");
    scanf("%f",&inp2);
    printf("Enter your third input:\t");
    scanf("%f",&inp3);

    sum = inp1 + inp2 + inp3;
    average = sum / 3;

    printf("\n\nYou entered the following numbers:\n%.3f\n%.3f\n%.3f",inp1,inp2,inp3);
    printf("\n\nThe average of the three was %.3f\nThe sum of the three was %.3f",average,sum);

    return 0;
}