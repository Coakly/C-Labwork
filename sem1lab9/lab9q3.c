/*
    Write a program that uses two float variables called input1 and input2. Enter values
    for these variables. Using pointers (called ptr1 and ptr2), your program should do the
    following:

    a) Print the address of input1 and input2 (on separate lines).

    b) Print the address of ptr1 and ptr2 (on separate lines) - Remember, even though these are pointers, 
    they are still variables. Therefore, each will also have their own address in memory (RAM).
    
    c) Make ptr1 and ptr2 point to input1 and input2 respectively. Print the contents of
    ptr1 and ptr2. (The output should be the same as the addresses of input1 and input1 above).
    
    d) Using the dereference operator, print the contents of the address stored in ptr1 and ptr2.
*/

#include <stdio.h>

int main()
{
    float input1, input2 = 0;
    float *ptr1, *ptr2;


    // assigns ptr1 to input1
    ptr1 = &input1;
    // assigns ptr2 to input2
    ptr2 = &input2;

    // inputting data in inp1 and inp2
    printf("Enter input for inp1:\t");
    scanf("%f",&input1);
    printf("Enter input for inp2:\t");
    scanf("%f",&input2);

    // (a) print the address of input1 and input2 (on seperate lines)
    printf("\nThe address of input1 is %p\nThe address of input2 is %p",&input1,&input2);

    // (b) print the address of ptr1 and ptr2
    printf("\n\nThe address of ptr1 is %p\nThe address of ptr2 is %p",&ptr1,&ptr2);

    // (c) Make ptr1 and ptr2 point to input1 and input2 respectively. Print the contents of ptr1 and ptr2. 
    // (The output should be the same as the addresses of input1 and input1 above).
    printf("\n\nThe contents of ptr1 is %p\nThe contents of ptr2 is %p",ptr1,ptr2);

    // (d) Using the dereference operator, print the contents of the address stored in ptr1 and ptr2.
    printf("\n\nThe contents of the address stored in ptr1 is %f\nThe contents of the address stored in ptr1 is %f",*ptr1,*ptr2);

    return 0;
}