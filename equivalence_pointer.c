#include<stdio.h>
int main()
{
int arr[]={4,5,6,2,9};
int *ptr=arr;
int i;
printf("Array elements are\n");
for(i=0;i<5;i++)
{
printf("arr[i]=%d\t i[arr]=%d\t  *(arr+1)=%d\t *(1+arr)=%d \n",arr[i],i[arr],*(arr+1),*(1+arr));
printf(" ptr[i]=%d\t i[ptr]=%d\t *(ptr+1)=%d\t *(1+ptr)=%d",ptr[i],i[ptr],*(ptr+1),*(1+ptr));
}
}
