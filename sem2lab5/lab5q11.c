/*
    Write a program to input a country and display the capital city of that country
*/

#include <stdio.h>


#define SIZ 20
#define SIZE 11

int main()
{
    char CuntReee[SIZE][SIZ] = {"Australia ", "Belgium", "China", "Denmark", "England", "France", "Greece", "Ireland", "Scotland", "Wales",};
    char Capital[SIZE][SIZ] = {"Canberra", "Brussels", "Beijing", "Copenhagen", "London", "Paris", "Athens", "Dublin", "Edinburgh", "Cardiff"};
    char input[SIZ];
    int i = 0;


    // country name input prompt
    printf("Enter the name of the country you would like to see the capital\n");
    scanf("%s",input);

    // search through countries for a match
    for (i = 0; i < SIZE - 1; i++)
    {
        if (CuntReee[i][0] == input[0])
        {
            printf("\n\n%s's capital is %s",CuntReee[i][0], Capital[i][0]);
            break;
        }
        
        printf("\n\n-- Invalid country --");
    }

    return 0;
}