#include<stdio.h>
void increment(int,int);
int main()
{
int a=4,b=6;
increment(a,b);
printf("The values of a and b before incrementing are:%d %d\n",a,b);
printf("the values of a and b after incrementing in main are: %d %d\n",a,b);
return 0;
}

void increment(int x,int y)
{
x++;
y++;
printf("the value of x and y after incrementing  are: %d %d\n",x,y);
}
