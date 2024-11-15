/*
    Write a C program that implements a name guessing game based on the Marvel
    comics/movies Avengers characters. Your program should implement the following (no
    error checking/validation required):
    
    (a) Store the following Avenger members as strings in an appropriate array: “Iron Man”,
        “Captain America”, “Black Widow”, “Thor”, “Hulk” & “Hawkeye”.
        (5 marks)

    (b) Using a separate function, ask the user to guess the name of an Avenger. They should
        enter any name from standard input and compare it to the names stored in the array
        only. If the guessed name entered matches a name in the array, display a message to
        standard output saying “Correct”. Otherwise, display “Bad guess – not an Avenger”.
        (12 marks)

    (c) Using a separate function, ask the user to enter from standard input the name of their
        favourite Avenger. Your function should append this name to the end of a file called
        “Avengers.txt”.
*/

// included libraries
#include <stdio.h>
#include <string.h>


// definitions for 2 dimensional character array
#define ROW 6
#define COL 15


// function signatures
void guess(char [ROW][COL]);
void fav();


// start main
int main()
{
    char avengers[ROW][COL] = {("Iron Man"), ("Captain America"), ("Black Widow"), ("Thor"), ("Hulk"), ("Hawkeye")};
    char *ptr;

    
    // link ptr to avengers[0][0]
    ptr = avengers[0];

    // function call to guess()     '
    guess(avengers);

    // function call to fav
    fav();


    return 0;   
}
// end main

/*
    ask the user to guess the name of an Avenger. 
    They should enter any name from standard input and compare it to the names stored in the array only. 
    If the guessed name entered matches a name in the array, display a message to
    standard output saying “Correct”. Otherwise, display “Bad guess – not an Avenger”.
*/
void guess(char avengers[ROW][COL])
{
    char input[COL];
    int result = 10;
    int i = 0;


    // printf prompting user input
    printf("Enter the name of an avenger\n");
    fgets(input, COL, stdin);

    // clear buffer
    input[strcspn(input, "\n")] = 0;

    // forloop comparing to names stores in array
    for (i = 0; i < ROW; i++)
    {
        result = strcmp(avengers[i], input);
        if(result == 0)
        {
            printf("Correct");
            return;
        }
    }
    
    // if guess by user is incorrect
    printf("Bad guess, not an avenger");

    return;
}

/*
    ask the user to enter from standard input the name of their
    favourite Avenger. Your function should append this name to the end of a file called        
    “Avengers.txt”.
*/
void fav()
{
    char fav[COL];
    FILE *fp;


    fp = fopen("Avengers.txt", "a");

    // Check if the file was opened successfully
    if(fp = (fopen("Avengers.txt", "a")) == NULL)
    {
        printf("\nError opening file");
    } // end if
    else if()
    {
        printf("\nEnter the name of your favourite avenger\n");
        fputs(fav, fp);

        fclose(fp);
    }

    return;
}