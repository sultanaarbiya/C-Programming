#include<stdio.h>
void fibonacci(int );
int main()
{
int range;
printf("enter the number of terms to be executed:");
scanf("%d",&range);
printf("the fibonacci series are:\n");
fibonacci(range);

}

void fibonacci(int range)
{
    int i,a=0,b=1,c;
    while(a<=range)
    {
c=a+b;

printf("%d\t",a);
a=b;
b=c;
}
}

