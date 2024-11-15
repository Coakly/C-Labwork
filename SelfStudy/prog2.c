/*
    checking the properies of int--
*/

#include <stdio.h>


int main()
{
    int var1 = 2;
    int var2 = 2;
    int var3 = 0;
    int var4 = 0;


    printf("var1 = %d\tvar2 = %d\tvar3 = %d\tvar4 = %d\n\n",var1,var2,var3,var4);

    // 'var3 = --var1;' decrements var1 and passes this value to var3
    var3 = --var1;
    // 'var4 = var2--;' decrements var2 and passes pre-increment value to var4
    var4 = var2--;

    printf("var1 = %d\tvar2 = %d\tvar3 = %d\tvar4 = %d\t",var1,var2,var3,var4);

    return 0;    
}