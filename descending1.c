#include<stdio.h>
int main()
{
int a[5]={8,17,0,3,4};
int temp,i,j;

for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
if(a[i]>a[j])
{
    temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
