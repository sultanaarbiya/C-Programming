#include<stdio.h>
int main()
{
int fact=0,num,i=1;
printf("enter the given number:");
scanf("%d",&num);
while(i<=num)
{
    i++;
if(num%i==0)
printf("%d\n",i);
}
return 0;


}
