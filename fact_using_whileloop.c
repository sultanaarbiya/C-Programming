#include<stdio.h>
int main()
{
int fact=1,i=1,num;
printf("enter the given number:");
scanf("%d",&num);
while(num>0)
{
fact=fact*num;
num++;

}
printf("%d",fact);
return 0;
}

