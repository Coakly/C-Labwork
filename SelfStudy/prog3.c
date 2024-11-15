#include <stdio.h>
void function(int);
int main()
{
static int num = 1;
for(int i = 0; i < 3; i++)
{
function(num);
}
return 0;
}
void function(int num)
{
num++;
printf("num is %d \n", num);
}