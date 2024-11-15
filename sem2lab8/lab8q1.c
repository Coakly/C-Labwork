/*
    Using Structures, write a program to do the following:
    Design structure templates to store data as follows:
    Airline name, 
    Flight number, 
    Passenger surname, 
    Seat number, 
    destination, 
    no of bags.

    Using functions only, your program must:
    a) Enter the travel information for 2 passengers
    b) Display the data for each passenger
*/

#include <stdio.h>


#define TEXT 30


struct information
{
    char airname[TEXT];
    char fltnum[TEXT]; // a character array is used in case the flight number were to start with zero
    char passsur[TEXT];
    int seatnum;
    char dest[TEXT];
    int numbags;
};

int main()
{
    struct information p1, p2;


    // data entry for passenger number1
    printf("--- Passenger 1 ---\n");
    printf("Enter your airline:\t");
    scanf("%s",p1.airname);
    printf("Enter your flight number:\t");
    scanf("%s",p1.fltnum);
    printf("Enter your surname:\t");
    scanf("%s",p1.passsur);
    printf("Enter your destination:\t");
    scanf("%s",p1.dest);
    printf("Enter your seat number:\t");
    scanf("%d",&p1.seatnum);
    printf("Enter the number of bags you have:\t");
    scanf("%d",&p1.numbags);
    printf("\n--- End Passenger 1 ---");

    // data entry for passenger number2
    printf("\n\n--- Passenger 2 ---\n");
    printf("Enter your airline:\t");
    scanf("%s",p2.airname);
    printf("Enter your flight number:\t");
    scanf("%s",p2.fltnum);
    printf("Enter your surname:\t");
    scanf("%s",p2.passsur);
    printf("Enter your destination:\t");
    scanf("%s",p2.dest);
    printf("Enter your seat number:\t");
    scanf("%d",&p2.seatnum);
    printf("Enter the number of bags you have:\t");
    scanf("%d",&p2.numbags);
    printf("\n--- End Passenger 2 ---\n");

    // all data shown
    
}