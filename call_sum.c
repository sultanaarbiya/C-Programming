#include<stdio.h>
void add(int *x,int *y);
int main()
{
int a,b,sum;
printf("enter the values of a and b:");
scanf("%d %d",&a,&b);
add(&a,&b);
return 0;
}

void add(int *x,int *y)
{
int sum=0;
sum=*x+*y;

printf("The sum of two numbers are: %d",sum);
}
