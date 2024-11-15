#include <stdio.h>

int main()
{
    FILE *fp;
    char mychar = 'x';


    fp = fopen("file.txt", "a");

    // check if file was opened correctly
    if (fp == NULL)
    {
        printf("\nfile not open");
    }
    else
    {
        printf("\nfile opened");
    }

    fputc(mychar, fp);
    
    fclose(fp);

    return 0;
}