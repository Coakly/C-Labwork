/*
    Write a program declaring an integer (num1), a character (char1) and 2 pointers (ptr1
    that points to an integer and ptr2 that points to a character).
    
    Initialise num1 and char1 to contain an integer and character. Initialise ptr1 to point to
    num1 and initialise ptr2 to point to char1. Your program should do the following:
    a) Print the contents and address of num1 and char1 (on separate lines).
    b) Print the contents of ptr1 and ptr2. (The output should be the same as the addresses
    of num1 and char1 above).
    c) Using the dereference operator, print the contents of the addresses stored in ptr1 and ptr2.
*/

#include <stdio.h>

int main()
{
    int num1 = 1;
    int *ptr1;
    char char1 = 'a';
    char *ptr2;


    // assigns ptr1 to point at num1
    ptr1 = &num1;
    // assigns ptr2 to point at char1
    ptr2 = &char1;

    // (a) Print the contents and address of num1 and char1 (on separate lines).
    printf("(a) \tContents of num1 = %d, address of num1 = %p\n\n",num1, &num1);
    printf("\tContents of char1 = %c, address of num1 = %p\n\n",char1, &char1);

    // (b) Print the contents of ptr1 and ptr2. (The output should be the same as the addresses of num1 and char1 above).
    printf("(b)\tContents of ptr1 = %p, contents of ptr2 = %p\n\n",ptr1,ptr2);

    // (c) Using the dereference operator, print the contents of the addresses stored in ptr1 and ptr2.
    printf("(c)\tContents of num1 = %d, address of num1 = %c\n\n",*ptr1,*ptr2);

    return 0;
}