#include<stdio.h>

void tables( int *num);
int main()

{
int num=5;
printf("multiplication table for %d is:\n",num);
tables(&num);
return 0;
}

void tables(int *num)
{
int c=10,i;
for(i=1;i<=c;i++)
{
printf("%d*%d=%d\n",*num,i,*num*i);
}
}

