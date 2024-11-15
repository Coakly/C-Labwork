/*
    Ask the user to enter 3 float numbers (numbers with a decimal part). Display the 1st
    correct to 4 decimal places, the 2nd correct to 3 decimal places, and the 3rd with no
    decimal places on separate lines
*/

#include <stdio.h>

int main()
{
    float f1, f2, f3 = 0;


    printf("Please enter 3 floats\nFloat1:");
    scanf("%f",&f1);
    printf("Float2:");
    scanf("%f",&f2);
    printf("Float3:");
    scanf("%f",&f3);

    printf("\n\nFloat1 = %.4f\nFloat2 = %.3f\nFloat3 = %.0f",f1, f2, f3);

    return 0;
}