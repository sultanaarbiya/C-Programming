#include<stdio.h>
int gcd(int x,int y, int z);

int main()
{
int a,b,c,result;
printf("enter the values of a and b:");
scanf("%d%d%d",&a,&b,&c);
result=gcd(a,b,c);
printf("%d %d and %d gcd is %d",a,b,c,result);
return 0;
}

int gcd(int x,int y,int z)
{
    int i=1,num;
while(i<=x&&y&&z)
{
if(x%i==0&&y%i==0&&z%i==0)
{
    num=i;
}
i++;
}
return num;
}
