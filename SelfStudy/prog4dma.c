/*

*/

#include <stdio.h>

int main()
{
    int cs_students[10];
    int i;


    for (i = 0; i < 10; i++)
    {
        scanf("%d",&*(cs_students+i));
    }
    
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",*(cs_students+i));
    }
    
    return 0;
}