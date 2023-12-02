#include<stdio.h>
int main()
{
    int i;
    int a[4]={9,12,24,5};
    /*printf("enter the size of the array:");
    scanf("%d",&size);
    printf("enter the elements  of the array:");
    for(i=0;i<size;i++)
     {
     scanf("%d",&a[i]);
      }*/
    for(i=0;i<4;i++)
     {
         if(a[i]%3==0&&a[i]%4==0)
         {
      printf("%d is divisible by 3 and 4\n",a[i]);
         }
     }
      return 0;
}
