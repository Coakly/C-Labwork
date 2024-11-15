/*
    Assuming the heart rate of is seventy five bpm.
    Write a program to calculate the number of heartbeats in a persons life based on an inputted age
*/

#include <stdio.h>

int main()
{
    int age = 0;
    int heart = 0;


    printf("please enter your age in years");
    scanf("%d",&age);

    heart = age*(75*60*24*365);

    printf("If your age is %d, assuming an average heart-rate of 75bpm over the course of your life, \nyour hearts has beat %d times in your life",age,heart);

    return 0;
}