#include<stdio.h>
int main()
{
int a[5]={4,3,12,0,9};
int *ptr=a;
int i,j,temp;

for(i=5;i>=1;i--)
{
    for(j=5;j>=1;j--)
    {
if(*(ptr+i)<*(ptr+j))
{
    temp=*(ptr+i);
*(ptr+i)=*(ptr+j);
*(ptr+j)=temp;
}
}
}
for(i=5;i>=1;i--)
{
printf("%d\n",*(ptr+i));
}
return 0;
}
