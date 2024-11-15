/*
    Write a program to do the following:
    (i) Calculate and display on separate lines:
    • the volume
    • the surface area of a box with height 10cm, length 11.5cm, width 2.5cm
    
    (ii) Calculate the area of a circle with a radius of 4.8 cm. You can assume the value
    of П (pi) is 3.14
*/

#include <stdio.h>

int main()
{
    float height = 10;
    float length = 11.5;
    float width = 2.5;
    float radius = 4.8;
    float pi = 3.14;
    float volume, surface, area = 0;


    // Calculating surface area and volume of cuboid
    volume = height*length*width;
    surface = 2*((length*width) + (width*height) + (length*height));

    // Calculating area of a circle
    area = pi*radius*radius;

    // Printing surface area and volume of cuboid
    printf("The cuboid of dimensions %.2fcm, %.2fcm, %.2fcm has a volume of %.2fcm^3 and a surface area of %.2fcm^2",height, length, width, volume, surface);

    // Printing area of circle
    printf("\n\nThe area of the circle of radius %.2fcm is %.2fcm^2",radius,area);

    return 0;
}