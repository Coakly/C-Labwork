#include <stdio.h>
#include <stdlib.h>

int main()
{
    char one[15] = "yesterday";
    char two[15] = "yesterday";


    if(one == two)
    {
        printf("works");
    }
    else
    {
        printf("doesn't");
    }

    return 0;
}