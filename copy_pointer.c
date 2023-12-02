#include<stdio.h>
int main()
{
int a[20];
int b[20];
int *ptr,*ptr1,i=0,j=0;
ptr=&a[0];
ptr1=&b[0];
for(i=0;i<5;i++)
{
scanf("%d",&ptr[i]);
*ptr1=*ptr;
ptr++;
ptr1;
}
ptr1=b;
for(i=0;i<5;i++)
{
printf("b=%d\n",*ptr1);
*ptr1++;
}
return 0;
}
