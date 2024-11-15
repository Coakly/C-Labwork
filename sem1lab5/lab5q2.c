/*
    Write a C program where the user enters a positive integer value, and compute the
    following sequence:
    if the number is even, halve it
    if the number is odd, multiply by 3 and add 1.
    (i) Repeat this process until the value is 1, displaying the current value each time.
    (ii) Display the number of times the process in part (i) above was performed.
*/

#include <stdio.h>

int main()
{
    int input, i = 0;


    // read value for 'input'
    printf("\nEnter a positive integer:\t");
    scanf("%d",&input);
    
    // inputted value is printed
    printf("\n\nValue entered is %d",input);
    printf("\n\n-- Process start --\n\n");

    // until input equals one:
    while(input != 1)
    {
        // if number is even
        if(input % 2 == 0)
        {
            // number is halved
            input = (input / 2);
            // current value of 'input' is displayed
            printf("Input was even and was halved.\t\tInput = %d\n",input);
        }
        // else, number is odd
        else
        {
            // number is tripled and one is added to the tripled figure
            input = (input*3)+1;
            // 
            printf("Input was odd and was tripled + 1.\tInput = %d\n",input);
        }
        i++;
    }

    printf("\nThe value of 'input' required %d iterations to equal one.",i);
    printf("\n\n-- Process complete --\n");
    

    return 0;
}