/*
    Write a program that asks the user to enter an integer between 1 and 100. Check
    whether the integer is even or odd and print a message on the screen stating "Number
    x is Even" or "Number y is Odd".
*/

#include <stdio.h>

int main()
{
    int input = 0;


    printf("Enter an integer:\t");
    scanf("%d",&input);

    if((input % 2) == 0)
    {
        printf("The number entered was even");
    }
    else
    {
        printf("The number entered was uneven");
    }

    return 0;
}