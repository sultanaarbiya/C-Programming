#include<stdio.h>
int gcd(int x,int y);

int main()
{
int a,b;
gcd(a,b);
return 0;
}

int gcd(int x,int y)
{
printf("enter the values of x and y:");
scanf("%d%d",&x,&y);
    int i=1,num;
while(i<=x&&y)
{
if(x%i==0&&y%i==0)
{
    num=i;
}
i++;
}
printf("%d and %d gcd is %d",x,y,num);
}
