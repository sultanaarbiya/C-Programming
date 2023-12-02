#include<stdio.h>
void swap(int,int);
int main()
{
int a=4,b=6;
swap(a,b);
printf("The values of a and b before swapping are:%d %d\n",a,b);
printf("the values of a and b after swapping in main are: %d %d\n",a,b);
return 0;
}

void swap(int x,int y)
{
int n;
n=x;
x=y;
y=n;
printf("the value of x and y after swapping  are: %d %d\n",x,y);
}
