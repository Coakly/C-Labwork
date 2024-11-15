/*
    write a program to accept a temperature in degrees farenheit and convert it to celcius.
*/

#include <stdio.h>

int main()
{
    float faren, celsius = 0;

    // User input to faren
    printf("Enter a temperature in degrees Fahrenheit:\t");
    scanf("%f",&faren);

    // Conversion of farenheit to celsius
    celsius = (faren - 32.0)*(5.0/9.0);

    // Print converted temperature
    printf("The temperature you entered in fahrenheit was: %.3f\nConverted to Celsius, this temperature is %.3f",faren,celsius);

    return 0;
}