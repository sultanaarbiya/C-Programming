#include<stdio.h>
void odd(int );

int main()
{
int num;
printf("enter the value of n:");
scanf("%d",&num);
odd(num);
return 0;
}

void odd(int n)
{
int i;
if(n%2==1)
{
for(i=2;i<=n;i++)
if(n%i==0)
{
 break;
}
printf("%d is an odd number\n",n);
}
else
{
    printf("%d is an even number\n",n);
}
if(i==n)
{
printf("%d is prime number\n",i);
}
else
    {
    printf("%d is not a prime number",n);
}
}
