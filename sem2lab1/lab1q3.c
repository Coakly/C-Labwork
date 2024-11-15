/*
    Write a program that uses a function to find the highest and lowest number of 3
    values. These 3 values must be passed as parameters to the function, 
    
    i.e.

    function_name(int, int, int). Your function should find these values and display
    messages stating:

    The Highest value is x
    The Lowest value is y
*/

// libraries
#include <stdio.h>


// function signature
int high(int, int, int);
int low(int, int, int);

int main()
{
    int num1, num2, num3 = 0;
    int highest, lowest = 0;
    int i;


    // data entry
    printf("Enter 3 numbers:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    // 3 numbers are sent to high() and the highest of the 3 is returned
    highest = high(num1, num2, num3);

    // 3 numbers are sent to low() and the lowest of the 3 is returned 
    lowest = low(num1, num2, num3);

    // printf showing the highest and lowest numbers entered.
    printf("\nThe numbers entered were %d, %d and %d.\nThe highest was: %d.\nThe lowest was: %d.",num1,num2,num3,highest,lowest);

    return 0;
}

int high(int n1, int n2, int n3)
{
    int hi = n1;


    if (hi < n2)
    {
        hi = n2;
    }
    if (hi < n3)
    {
        hi = n3;
    }
    
    return hi;
}

int low(int n1, int n2, int n3)
{
    int lo = n1;


    if (lo > n2)
    {
        lo = n2;
    }
    if (lo > n3)
    {
        lo = n3;
    }
    
    return lo;
}