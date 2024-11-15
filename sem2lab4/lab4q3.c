/*
    Write a program to display how a character array (e.g., char my_word[]) can be
    initialised with a string. 
    
    Try both ways, i.e. 
    (i) initialising each element of the array with a specific character 
    (ii) initialise the array automatically with a string in double- quotes. 
    
    What happens if you initialise each element of the array and do not include the
    null character? Print the string and see.

    Print out the contents of the array. Does the null character get printed? 
    Try printing the null character after the last letter in the string - what is displayed?
    
    Change your code and test it to see the different ways you can output the contents of
    the character array as a string.
*/

#include <stdio.h>


#define SIZE 10


int main()
{
    char word1[SIZE] = {'P', 'a', 'u', 'l', ' ', 'C', 'o', 'l'};
    char word2[SIZE] = "Paul Col";

    // print word1
    fputs(word1, stdout);

    printf(" ");

    // print word2
    fputs(word2, stdout);

    return 0;
}