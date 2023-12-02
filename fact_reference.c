#include<stdio.h>
void fact(int );

int main()
{
int num=6,factorial;
fact(&num);
return 0;
}

void fact(int n,int *fact)
{
int *factorial=1,i=1;
while(i<=n)
{
*factorial=*(factorial)*i;
i++;
}
printf("factorial of %d is %d",n,factorial);
}
