#include<stdio.h>
int main()
{
unsigned int num=12;
int x,i;
printf("the binary equivalent of %d is:",num);
for(i=31;i>=0;i--)
{
x=num^(1<<i);
(x)?printf("0"):printf("1");
}
}
