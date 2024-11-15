/*
Pass by Reference. 
Write a program that uses two functions 
(1 function to calculate he area of a Square, another function to calculate the area of a Circle). 

Declare a variable in your main for the length of a side of the Square and another variable for
the radius of the Circle. Ask the user to enter these values. 

Using Pass by Reference, pass these as parameters to the separate functions, calculate the areas of the Square
and Circle in their separate functions, and display the calculated areas for the Square
and Circle back in your main(). 

Remember, you must use Pass by Reference. Do not
forget to declare the signatures for both functions.

You can assume the value of pi = 3.14
*/

#include <stdio.h>

#define PI 3.14


// function sigs
float arsquare(float); // calculates area of square of given parameters
float arcircle(float); // calculates area of circle of given parameters

// start main
int main()
{
    float length, radius = 0;
    float square, circle = 0;


    // entry of length
    printf("Enter the length of one side of a square with which the shape's area will be calculated");
    scanf("%f",&length);

    // entry opf radius
    printf("\n\nEnter the radius length of a circle with which the shape's area will be calculated");
    scanf("%f",&radius);

    // each value is passed to their respective area functions. 
    square = arsquare(length);
    circle = arcircle(radius);

    // final area is displayed
    printf("\n\nThe area of a square with side %fcm is %f^2cm",length,square);
    printf("\nThe area of a circle with radius %fcm is %f^2cm",radius,circle);

    return 0;
}
// end main


// Calculates area of square and passes back to main
float arsquare(float len)
{
    float area = 0;


    area = len*len;

    return area;
}

// Calculates area of circle and passes back to main
float arcircle(float rad)
{
    float area = 0;


    area = PI*(rad*rad);

    return area;
}
