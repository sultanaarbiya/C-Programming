#include<stdio.h>
int main()
{
int size;
int  a[20];
int i,j,k;
printf("enter the size:");
scanf("%d",&size);
printf("enter the elements  of the array:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("original Array:");
for(i=0;i<size;i++)
{
    printf("%d\t",a[i]);
}

for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(a[i]==a[j])
{
for(k=j;k<size;k++)
{
a[k]=a[k+1];
}
j--;
size--;
}
}
}
printf("\n new array:");
for(i=0;i<size;i++)
{
printf("%d\t",a[i]);
}

return 0;
}
