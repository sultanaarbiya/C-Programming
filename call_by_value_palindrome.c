
#include<stdio.h>
void palindrome(int num);
int main()
{
int num;
printf("enter the given number:");
scanf("%d",&num);
palindrome(num);
return 0;
}

void palindrome(int num)
{
int rem,p=0,temp;

temp=num;
while(num>0)
{
rem=num%10;
p=p*10+rem;//0+1=1//1x10+2=10+2=12//12x10=120+1=121
num=num/10;
}
if(temp==p)
{
    printf("%d is an palindrome number",p);
}
else
{
  printf("%d is not an palindrome number",p);
}
}

