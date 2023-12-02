#include<stdio.h>
void prime(int );

int main()
{
int num;
printf("enter the value of n:");
scanf("%d",&num);
prime(num);
return 0;
}

void prime(int n)
{
int i;
for(i=2;i<=n;i++)
{
if(n%i==0)
{
 break;
}
}
if(i==n)
{
printf("%d is prime number",n);
}
else
{
    printf("%d is not a prime number",n);
}
}
