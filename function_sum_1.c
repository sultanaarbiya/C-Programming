#include<stdio.h>
int sum();//function declaration
int main()
{
sum();//function call
}
int  sum()//function definition
{
int a,b,sum=0;
printf("enter the values of a and b:");
scanf("%d %d",&a,&b);
sum=a+b;
printf("%d",sum);
}
