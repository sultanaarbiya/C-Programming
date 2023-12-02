#include<stdio.h>
int armstrong(int num);

int main()
{
int num,n;
printf("enter the given number:");
scanf("%d",&num);
n=armstrong(num);
if(n==num)
{
printf("given no is armstrong");
}
else
{
printf("given no is not armstrong");
}
return 0;
}


int armstrong(int num)
{
int rem,arms=0;
while(num>0)
{
rem=num%10;
arms=(rem*rem*rem)+arms;
num=num/10;
}
}
