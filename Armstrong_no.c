#include<stdio.h>
int main()
{
int num,rem,armstrong=0,temp;
printf("enter the given number:");
scanf("%d",&num);
temp=num;
if(num!=0)
{
rem=num%10;
armstrong=(rem*rem*rem)+armstrong;
num=num/10;

rem=num%10;
armstrong=(rem*rem*rem)+armstrong;
num=num/10;

rem=num%10;
armstrong=(rem*rem*rem)+armstrong;
num=num/10;

if(temp==armstrong)
{
printf("given number is a armstrong");
}
else
{
printf("given number is not an armstrong");
}
printf("\n%d",armstrong);
return 0;
}
}
