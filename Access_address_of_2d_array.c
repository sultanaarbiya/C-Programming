#include<stdio.h>
int main()
{
int num[][3]={1,2,3,4,5,6,7,8,9};
int i;
printf("The base address of elements \n");
for(i=0;i<3;i++)
printf("num[%d][%d]\t=%d\n",i,num[i]);
}
