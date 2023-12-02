#include<stdio.h>
int main()
{
unsigned int num=12;
int trail=0,lead=0;
for(int i=0;i<31;i++)
{
    if((num>>i)&1)
    {
        break;
    }
    trail++;
    }
printf("number of trailing zero's is:%d\n",trail);

}

