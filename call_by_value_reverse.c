#include<stdio.h>
void reverse(int num);

int main()
{
  int num;
printf("enter the n digit number:");
scanf("%d",&num);
reverse(num);
return 0;
}

void reverse(int num)
{
int rev=0,rem;
while(num!=0)
{
  rem=num%10;
  rev=rev*10+rem;
  num=num/10;
}
printf("%d",rev);

  }
