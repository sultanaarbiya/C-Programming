
#include<stdio.h>
int prime(int );

int main()
{
int num,m,n,i;
prime(num);
printf("enter the range :");
scanf("%d%d",&m,&n);
for(i=m;i<=n;i++)
{
if(prime(i)==0)
{
printf("the prime numbers are:%d\n",i);
}
}
return 0;
}

int prime(int n)
{
int i;
for(i=2;i<=n;i++)
if(n%i==0)
{
 break;
}
if(i==n)
{
return 0;
}
}
