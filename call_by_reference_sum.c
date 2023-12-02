#include<stdio.h>
int sum(int *,int *);
int main()
{
int a=4,b=6,add;
add=sum(&a,&b);
printf("the value of result is: %d",add);
return 0;
}

int sum(int *x,int *y)
{
int result=*x+*y;
return result;
}
