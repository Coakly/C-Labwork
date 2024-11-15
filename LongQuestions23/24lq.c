/*
    You are a software architect for an IT company. You meet with a client to discuss their
    requirements for a software application that you will design and develop. The following
    is a part of the conversation:
    You: What is the nature of your business and how can we assist?
    Client: I am a dentist and run a small private dental practise in my hometown. I
    need a software application to allow me to enter the fee paid by each patient
    for their treatment. At the end of each business day, the application should
    calculate the (i) total fees paid, and (ii) average fee paid for that day.
    You: How many patients do you see each day?
    Client: It is different every day. I only know the exact the number of appointments
    scheduled at the start of the day.
    You: Do you need the daily total & average fee paid each day to be permanently
    saved?
    Client: Yes, if possible.

    Using the above requirements, write a C program to:
        (a) Given that the daily number of patient appointments is only known at the start of each
            day, your program should allow the dentist to enter the total number of patients with an
            appointment that day. Using this number, your program must allow the dentist to enter
            the fee paid by each patient that day using standard input.
        (8 marks)

        (b) Using the C program in part (a), extend the code to calculate and display to standard
            output the:
            (i) total fees
            (ii) average fee paid by the patients at the close of business that day.
        (10 marks)

        
        (c) In order to permanently save the calculated (b)(i) total fees and (b)(ii) average fee paid
            at the close of business each day, extend your C code to write both amounts, i.e., the
            total fees and average fee paid that day, to a file called “fees.txt”.
            You may assume that the file is located in the same directory as the source code.
            No validation (error-checking) is required.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    int appoint = 0;
    int *ptr;
    int avg = 0;
    int total = 0;
    int i = 0;


    // printf to prompt user input
    printf("How many appointments are scheduled for today?\n");
    scanf("%d",&appoint);

    // dynamically allocate space based on number of appointments scheduled
    ptr = calloc(appoint, sizeof(int));

    // printf prompting user to enter fees
    printf("\nEnter %d fees\n",appoint);

    // allow user to enter 'appoint' entries of fees
    for (i = 0; i < appoint; i++)
    {
        scanf("%d",&*(ptr+i));
    }   //endfor

    // forloop to calculate total fees
    for (i = 0; i < appoint; i++)
    {
        total = total + *(ptr+i);
    }   //endfor
    
    // average calculated based off total divided by appoint
    avg = total / appoint;

    // printf displays (i)total and (ii)average fees 
    printf("\n\nTotal fees = %d\nAverage fee = %d",total,avg);

    // open fees.txt, linked to *fp to append the file
    fp = fopen("fees.txt","a");

    // fprintf to append total and avg to the file
    fprintf(fp, "\nTotal fee = %d\tAverage fee = %d",total,avg);

    // close fees.txt
    fclose(fp);
    return 0;   
}