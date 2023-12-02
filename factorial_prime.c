#include<stdio.h>
int main()
{
int i,fact=1,a=1,j,count;
while(a<=100)
{
count=0;
i=2;
while(i<=a/2)
    {
        if(a%i==0)
        {
           count++;
           break;
        }
        i++;
    }
if(count==1 && a!=1)
{
printf("%d",a);
}
a++;
}
return 0;
}
