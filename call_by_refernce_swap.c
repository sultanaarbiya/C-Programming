#include<stdio.h>
void swap(int *,int *);
int main()
{
int a,b;
printf("enter the values of a and b:");
scanf("%d %d",&a,&b);
printf("The values of a and b before swapping are:%d %d\n",a,b);
swap(&a,&b);
printf("the value of a and b after swapping  are: %d %d\n",a,b);
return 0;
}

void swap(int *x,int *y)
{
int n;
n=*x;
*x=*y;
*y=n;
}
