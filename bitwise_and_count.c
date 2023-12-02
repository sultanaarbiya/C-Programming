#include<stdio.h>
int main()
{
unsigned int num=12;
int x,i,count1=0,count2=0;
for(i=31;i>=0;i--)
{
x=num&(1<<i);
    if(x==0)
    {
count1++;
printf("%d",count1);
    }
    else
        {
        count2++;
printf("%d",count2);
        }
}
}
