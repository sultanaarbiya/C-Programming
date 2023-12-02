#include<stdio.h>
int main()
{
int ch;
printf("enter the given character:");
scanf("%d",&ch);
if(ch>=0 &&ch<=9)
{
printf("the given value is the number");
}
else
{
printf("the given value is not the number");
}
return 0;
}
