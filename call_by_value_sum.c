#include<stdio.h>
void sum(int,int);
int main()
{
int a=4,b=6;
sum(a,b);

return 0;
}

void sum(int x,int y)
{
int result=x+y;
printf("the value of result is: %d",result);
}
