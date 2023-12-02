#include<stdio.h>
int main()
{
int i,j;
int a[5]={8,9,25};
for(i=0;i<=a[i];i++)
{
for(j=i+1;j<=a[i];j++)
{
if(a[i]%j==0)
 {
 printf("%d\n",j);
}
}
}
return 0;
}
