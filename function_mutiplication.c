#include<stdio.h>

int tables(int );
int main()

{
int num=5;
printf("multiplication table for %d is:\n",num);
tables(num);
return 0;
}

int tables(int num)
{
int i;
for(i=1;i<=10;i++)
{
printf("%d*%d=%d\n",num,i,num*i);
}
}

