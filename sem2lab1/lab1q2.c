/*
    Write a program that uses a function with 2 parameters (a character and an integer, 
    e.g., function_name(char, int). 
    
    Your function must display the character parameter a certain number of times on one line 
    where this number is the integer parameter. 
    For example, if your function is function_name(*,5) it will display
    '*****'
*/

#include <stdio.h>


// function signature
void stars(char, int);

int main()
{
    int count = 0;
    char let;


    printf("Enter a letter.");
    scanf(" %c",&let);  
    printf("Enter a number.");
    scanf(" %d",&count);

    stars(let, count);

    return 0;
}

void stars(char cha, int num)
{
    int i = 0;


    printf("\n");
    for (i = 0; i < num; i++)
    {
        printf("%c",cha);
    }

    return;   
}