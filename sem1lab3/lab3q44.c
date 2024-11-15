/*
    Suppose that v1, v2 & v3 are three floats with value 5, -4.5 & 11.25 respectively. 
    Write a printf to diaplay: "v1 = 5, v2 = -4.5, v3 = 11.25"
*/

#include <stdio.h>

int main()
{
    float v1 = 5;
    float v2 = -4.5;
    float v3 = 11.25;


    printf("v1 = %.0f, v2 = %.1f, v3 = %.2f", v1, v2, v3);

    return 0;
}