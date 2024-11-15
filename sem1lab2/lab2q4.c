/*
    Write a program to calculate and display the volume of a cube. The length of all sides
    of the cube is 2.8 m. Display the volume.
*/

#include <stdio.h>

int main()
{
    float len = 2.8;
    float vol = 0;


    vol = len*len*len;
    printf("The volume of the cube with length, width and height of 2.8m is %.3f = %.3f",len,vol);

    return 0;
}