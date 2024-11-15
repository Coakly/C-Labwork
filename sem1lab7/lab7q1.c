/*
    Assuming an integer array called ‘arr’ with 10 elements, what is in arr[8] after the
    following code is executed?
    Display the contents of arr[8]
    to see its contents. Do you understand how it works and what is happening? I suggest
    you step through the process on paper to understand it.
*/

#include <stdio.h>

#define SIZE 10

int main()
{
    int i = 0;
    int arr[SIZE];


    for (i = 0; i < 10; i++)
    {
        arr[i] = 9 - i;
    }
    // Display the contents of arr[8]
    for (i = 0; i < 10; i++)
    {
        arr[i] = arr[ arr[i] ];
    }

    // Display the contents of arr[8]
    printf("%d",arr[]);

    return 0;
}