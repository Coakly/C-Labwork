/*
    Using a loop, display all the even numbers from 1 - 100, separated by commas (Hint:
    use the modulus operator, i.e., % )
*/

#include <stdio.h>

#define SIZE 100

int main()
{
    int input = 0; 
    int i = 0;


    printf("Enter an integer ");
    scanf("%d",&input);

    for (i = 0; i < SIZE+1; i++)
    {
        if (i % input == 0)
        {
            printf("\n%d",i);
        } 
    }
      
    return 0;
}