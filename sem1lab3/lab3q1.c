/*
    Ask the user to enter 3 numbers and display these on separate lines.
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3 = 0;


    // number entry
    printf("please enter num1:\t",&num1);
    scanf("%d",&num1);
    printf("please enter num2:\t",&num2);
    scanf("%d",&num2);
    printf("please enter num3:\t",&num3);
    scanf("%d",&num3);

    // printing values
    printf("\n\nUser entered values are as follows:\nNum1 = %d\nNum2 = %d\nNum3 = %d",num1, num2, num3);

    return 0;
}