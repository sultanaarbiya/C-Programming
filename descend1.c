#include<stdio.h>
int main()
{
int a[4]={12,16,15,4};
int i,j,temp;
//int length=sizeof(a)/sizeof(a[0]);

for(i=0;i<4;i++)
{
    for(j=i+1;j<4;j++)
    {
if(a[i]<a[j])
{
    temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<4;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
