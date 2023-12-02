#include<stdio.h>
void fact(int);
int main()
{
int n=5;
fact(n);
return 0;
}

void fact(int x)
{
int f=1,i;
for(i=1;i<=x;i++)
f=f*i;
printf("the value of %d fact is: %d",x,f);
}
