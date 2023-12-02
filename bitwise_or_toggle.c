#include<stdio.h>
void toggle(unsigned int);
int main()
{
unsigned int num=12;
toggle(num);
}
void toggle(unsigned int num)
{
int i,n;
for(i=3;i>=0;i--)
{
n=num^(1<<i);
if(n==0)
{
printf("0");
}
else
    {
    printf("1");
}
}
}
