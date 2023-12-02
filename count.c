#include<stdio.h>
int main()
{
int num,count=0;
printf("enter the given numbers n1,n2:");
scanf("%d",&num);
while(num>0)
{
    num=num/10;
    count++;

}
printf("%d\n",count);
return 0;


}
