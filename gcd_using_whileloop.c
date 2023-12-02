#include<stdio.h>
int main()
{
int a,b,gcd,i=1;
printf("enter the values of a and b:");
scanf("%d%d",&a,&b);
while(i<=a&&b)
{
if(a%i==0&&b%i==0)
{
    gcd=i;
}
i++;
}
printf("%d",gcd);
return 0;
}
