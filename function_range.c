#include<stdio.h>
int odd(int );

int main()
{
int num,n,i;
printf("enter the range to print:");
scanf("%d",&n);

odd(num);
return 0;
}

int odd(int n)
{
int i;
for(i=1;i<=n;i++)
{
if(i%2!=0)
printf("%d",i);
}
}
