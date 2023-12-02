#include<stdio.h>
void gcd(int ,int );

int main()
{
int a=12,b=32;
gcd(a,b);
return 0;
}

void gcd(int x,int y)
{
//printf("enter the values of x and y:");
//scanf("%d%d",&x,&y);
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
