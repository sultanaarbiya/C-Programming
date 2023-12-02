#include<stdio.h>
void gcd(int x,int y);

int main()
{
int a,b,result;
printf("enter the values of a and b:");
scanf("%d%d",&a,&b);
gcd(a,b);
return 0;
}

void gcd(int x,int y)
{
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
