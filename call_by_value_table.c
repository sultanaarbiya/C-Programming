#include<stdio.h>
void table(int);
int main()
{
int n=5;
table(n);
printf("the value of n after process in main is:%d",n);
return 0;
}

void table(int x)
{
int i;
x=6;
for(i=1;i<=10;i++)
printf("the table of %d element is: %d\n",x,x*i);
}
