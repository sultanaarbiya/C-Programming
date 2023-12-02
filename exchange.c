#include<stdio.h>
int main()
{
int i;
int arr1[5]={1,2,3,4,5};
int arr2[5]={6,7};
for(i=0;i<5;i++)
{
arr1[i]=arr1[i]+arr2[i];
arr2[i]=arr1[i]-arr2[i];
arr1[i]=arr1[i]-arr2[i];
}
for(i=0;i<5;i++)
{
  printf("arr1[i]=%d  arr2[i]=%d\n",arr1[i],arr2[i]);
}
return 0;
}
