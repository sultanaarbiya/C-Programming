#include<stdio.h>
int main()
{
int a=5,b=7,c=8;
if(a>b)
{
if(a>c)
{
printf("a is bigger\n");
}
else
{
printf("c is bigger");
}
}
else
{
if(b>c)
{
printf("b is bigger");
}
else
{
printf("c is bigger");
}
}
return 0;
}
