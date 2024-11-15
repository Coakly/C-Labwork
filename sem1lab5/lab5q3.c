/*
    Write a program that asks the user to enter a number between 1 - 5. Your program
    should display all the numbers between 1 - 20 that are evenly divisible by this
    number. You will need to use a loop.
*/
#include <stdio.h>

#define SIZE 20

int main()
{
    int input, i = 0;


    // input is read in
    printf("Enter a number between 1 & 5");
    scanf("%d",&input);

    // check that number is between 1 & 5
    if((input > 1) && (input < 6))
    {
        for (i = 1; i < SIZE; i++)
        {
            if (i % input == 0)
            {
                printf("\n%d is evenly divisible by %d",i,input);
            }
            
        }
    }
    else
    {
        printf("\nInput is invalid");
        return 0;
    }

    return 0;
}