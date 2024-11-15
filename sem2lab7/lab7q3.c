/*
    Using Structures, write a program to do the following:
    Design a structure template to store biographical data about a person.
    Your program must:

    a) Enter data for a person's first name, surname, date of birth, height, weight, eye
    colour & country of citizenship.
    b) Display the data entered.
    c) Copy the data and store it in a 2 nd person's record and then modify it.
    d) Display the new data for the 2 nd person.
*/

#include <stdio.h>

#define SIZE 20


struct DOB
{
    int day;
    int month;
    int year;
};


struct person
{
    struct DOB dob;
    char name[SIZE];
    char sur[SIZE];
    char eye[SIZE];
    char country[SIZE];
    int height;
    int weight;
};

int main()
{
    struct person p1, p2;


    // data entry
    printf("Enter your first name\n");
    scanf("%s",p1.name);
    printf("Enter your surname\n");
    scanf("%s",p1.sur);
    printf("Enter your day of birth\n");
    scanf("%d",&p1.dob.day);
    printf("Enter your month of birth\n");
    scanf("%d",&p1.dob.month);
    printf("Enter your year of birth\n");
    scanf("%d",&p1.dob.year);
    printf("Enter your country\n");
    scanf("%s",p1.country);
    printf("Enter your eye colour\n");
    scanf("%s",p1.eye);
    printf("Enter your height in cm\n");
    scanf("%d",&p1.height);
    printf("Enter your weight in kg\n");
    scanf("%d",&p1.weight);

    printf("\n\nPerson 1 data:\nName: %s\nSurname: %s\nDate of birth:%d/%d/%d\nCountry: %s\nEye colour: %s\nHeight in cm: %d\nWeight in kg: %d",p1.name, p1.sur, p1.dob.day,p1.dob.month,p1.dob.year,p1.country,p1.eye,p1.height,p1.weight);

    p2 = p1;

    printf("\n\nPerson 2 data:\nName: %s\nSurname: %s\nDate of birth:%d/%d/%d\nCountry: %s\nEye colour: %s\nHeight in cm: %d\nWeight in kg: %d",p2.name, p2.sur, p2.dob.day,p2.dob.month,p2.dob.year,p2.country,p2.eye,p2.height,p2.weight);

    return 0;
}
