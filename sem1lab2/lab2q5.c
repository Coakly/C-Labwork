/*
    Write a program to perform the following operations and display the result:
    • 15 + 10
    • 15 – 10
    • 15 * 10
    • 15 / 10
    • 15 % 3
*/

#include <stdio.h>

int main()
{
    float result = 0;


    result = 15 + 10;
    printf("\n15 + 10 = %.3f",result);

    result = 15 - 10;
    printf("\n15 - 10 = %.3f",result);

    result = 15 * 10;
    printf("\n15 x 10 = %.3f",result);

    result = 15 / 10;
    printf("\n15 / 10 = %.3f",result);

    result = 15 % 3;
    printf("\nRemainder of 15 / 3 = %.3f",result);


    return 0;
}