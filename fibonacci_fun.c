#include<stdio.h>
int fibonacci(int a, int b);
int main()
{
int n1,n2,n3,num,series;
printf("enter the number of terms to be executed:");
scanf("%d",&num);

series=fibonacci(n1,n2);
printf("Fibonacci sequence is %d",series);
}

int fibonacci(int a,int b)
{
    int i,c,num;
a=0,b=1;
for(i=1;i<=num;i++)
{
c=a+b;
a=b;
b=c;
}

return c;
}
