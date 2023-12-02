#include<stdio.h>
int main()
{
int lead=0,msb,num=12;
int size=sizeof(num)*8;
msb=1<<(size-1);
for(int i=0;i<size;i++)
{
    if((num<<i)&msb)
    {
        break;
    }
    lead++;
}
printf("number of leading zero's is:%d\n",lead);
}
