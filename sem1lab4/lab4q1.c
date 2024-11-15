/*
    Using a switch statement, write a program that asks the user to enter a character from
    standard-input and displays a message whether the character is a vowel (upper and
    lower case), i.e., (a, e, i, o, u) or not.
*/

#include <stdio.h>

int main()
{
    char input = '0';


    printf("Please enter a character:\t");
    scanf(" %c",&input);

    switch (input)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("The character entered is a lowercase vowel");
        break;
    
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("The character entered is an uppercase vowel");
        break;

    case 'q':
    case 'w':
    case 'r':
    case 't':
    case 'y':
    case 'p':
    case 's':
    case 'd':
    case 'f':
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'z':
    case 'x':
    case 'c':
    case 'v':
    case 'b':
    case 'n':
    case 'm':
        printf("The character enteres is a lowercase consonant");
        break;
        
    case 'Q':
    case 'W':
    case 'R':
    case 'T':
    case 'Y':
    case 'P':
    case 'S':
    case 'D':
    case 'F':
    case 'G':
    case 'H':
    case 'J':
    case 'K':
    case 'L':
    case 'Z':
    case 'X':
    case 'C':
    case 'V':
    case 'B':
    case 'N':
    case 'M':
        printf("The character enteres is an uppercase consonant");
        break;

    default:
        printf("The character entered is not a valid consonant or vowel");
        break;
    }

    return 0;
}