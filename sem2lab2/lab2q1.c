/*
    Returning a value from a function. Write a program that uses a function to check if a
    number is even or odd. Your main() should allow the user to enter any number and
    this should be passed to your function. Your function should check if the number is
    even or odd and return a 1 if even or a 0 if odd. Your main() should then indicate the
    result.
*/

#include <stdio.h>

int evenodd(int);

int main()
{
    int input = 0;
    int tick = 0;


    printf("Enter a number:\n");
    scanf("%d", &input);

    tick = evenodd(input);

    if (tick == 1)
    {
        printf("\nNumber is even");
    }
    else if (tick == 0)
    {
        printf("\nNumber is odd");
    }
    else
    {
        printf("\nNumber is invalid");
    }
    
    return 0;
}

int evenodd(int num)
{
    if(num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}