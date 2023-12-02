#include<stdio.h>
void armstrong(int *num);
int main()
{
int num;
printf("enter the given number:");
scanf("%d",&num);
armstrong(&num);
return 0;
}

void armstrong(int *num)
{
int rem,arm=0,temp;
temp=*num;
while(*num>0)
{
rem=*num%10;
arm=(rem*rem*rem)+arm;
*num=*num/10;
}
if(temp==arm)
{
    printf("%d is an armstrong number",temp);
}
else
{
  printf("%d is not an armstrong number",temp);
}
}
