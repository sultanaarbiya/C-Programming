A#include<stdio.h>
void fact(int );

int main()
{
int num=6,factorial;
printf("factorial of %d is:",num);
fact(num);
return 0;
}

void fact(int n)
{
int fact=1,i=1;
while(i<=n)
{
fact=factorial*i;
i++;
}
printf("%d",fact);
}
