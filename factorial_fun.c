#include<stdio.h>
int fact(int  );//without return type and with arguments

int main()
{
//int num=6,factorial;
int n,factorial;
factorial=fact(n);
return 0;
}

int fact(int n)
{
int factorial=1,i=1;
printf("enter the value of n:");
scanf("%d",&n);
while(i<=n)
{
factorial=factorial*i;
i++;
}
printf("%d",factorial);
}
