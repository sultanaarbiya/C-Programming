#include<stdio.h>
void factor(int);
int main()
{
int num;
printf("enter the given number:");
scanf("%d",&num);
factor(num);
printf("the value of num  in main is %d",num);
return 0;
}

void factor(int num)
{
 int i=1;
while(i<=num)
{
    i++;
if(num%i==0)
printf("The factors of %d are: %d\n",num,i);
}
}
