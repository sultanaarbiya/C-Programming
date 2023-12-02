#include<stdio.h>
int main()
{
int a[10];
int i,pos;
printf("enter the elements  of the array:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("enter the pos to delete:");
scanf("%d",&pos);
if(pos>=10+1)
{
printf("deletion is not possible");
}
else
{
for(i=pos-1;i<10;i++)
{
a[i]=a[i+1];
}
for(i=0;i<10-1;i++)
{
printf("%d",a[i]);
}
}
}
