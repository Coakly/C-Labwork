/*
    Write a program that uses the modulus operator, i.e., % , to calculate and display the
    remainder for the following arithmetic operations: (display the remainder beneath
    each operation)
    • 2 % 2
    • 3 % 2
    • 5 % 2
    • 7 % 3
    • 100 % 33
    • 100 % 7
*/

#include <stdio.h>

int main()
{
    float rem = 0;


    rem = 2 % 2;
    printf("\nRemainder of 2 divided by 2 is %.2f",rem);

    rem = 3 % 2;
    printf("\nRemainder of 3 divided by 2 is %.2f",rem);

    rem = 5 % 2;
    printf("\nRemainder of 5 divided by 2 is %.2f",rem);

    rem = 7 % 3;
    printf("\nRemainder of 7 divided by 3 is %.2f",rem);

    rem = 100 % 33;
    printf("\nRemainder of 100 divided by 33 is %.2f",rem);

    rem = 100 % 7;
    printf("\nRemainder of 100 divided by 7 is %.2f",rem);

    return 0;
}