/*
    Write a program that asks the user to enter 2 integer values. Store these in variables
    called num1 and num2 respectively. Using pointers only, find the sum of these
    numbers, store them in a third variable called sum, and display this value stored in
    variable sum. (Hint: the dereference operator will be used to perform most of your
    task). NB - don't forget that you will need 3 pointer variables.
*/

#include <stdio.h>

int main()
{
    int num1, num2, sum = 0;
    int *ptr1, *ptr2, *ptr3;


    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &sum;
    
    printf("Enter two numbers");
    scanf("%d",&num1);
    scanf("%d",&num2);

    *ptr3 = *ptr1 + *ptr2;

    printf("\nThe sum of num1 and num2 is:\t%d",*ptr3);

    return 0;
}