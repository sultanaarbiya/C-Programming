#include<stdio.h>
void odd(int *);

int main()
{
int num;
printf("enter the value of n:");
scanf("%d",&num);
odd(&num);
return 0;
}

void odd(int *n)
{
if(*n%2==1)
{
printf("%d is an odd number",*n);
}
else
{
    printf("%d is an even number",*n);
}
}
