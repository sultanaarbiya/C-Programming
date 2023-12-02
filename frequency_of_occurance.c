#include<stdio.h>
int main()
{
int a[3]={8,4,4};
int temp,i,j,num=1;

for(i=3;i>=1;i--)
{
    for(j=3;j>=1;j--)
    {
if(a[i]==a[j])
{
    num++;
}
}
}
printf("%d\n",num);
return 0;
}
