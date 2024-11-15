#include <stdio.h>

int main()
{
    //Program to illustrate errors in a C program
    int num1, num2;
    float num3;


    //declaring variable values
    num1 = 400;
    num2 = 600;
    num3 = num2;

    //print values
    printf("num1 contains %d\n\n",num1);
    printf("num2 contains %d and num3 contains %.3f",num2,num3);

    return 0;
}
