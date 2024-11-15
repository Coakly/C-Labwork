/*
    Returning a value from a function. Write a program that uses a function to calculate the average of 3 numbers.

    Your main() should ask the user to enter these 3 numbers and they should be passed to the function as parameters. 
    
    Your function should calculate the average and return this value back to the main(). Your main() should
    then display this average value.
*/

#include <stdio.h>

// function signatures
int avg(int, int, int);

int main()
{
    int num1, num2, num3 = 0;
    int output = 0;


    printf("Enter 3 numbers\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    output = avg(num1, num2, num3);

    printf("\nYo dawg, the avg was %d. peace",output);

    return 0;
}

int avg(int n1, int n2, int n3)
{
    int avg = 0;


    avg = ((n1 + n2 + n3) / 3);

    return avg;
}