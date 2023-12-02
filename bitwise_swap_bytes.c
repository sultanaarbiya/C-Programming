#include<stdio.h>
int main()
{
unsigned int num=0xAABBCCDD;
int a=0,b=0,i;
for( i=0;i<=3;i++)
  a=a|((num>>(i*8)&0xff)<<(3-i)*8);
  //b=((num >> 16*i) & 0x0000ffff) | ((num << 16*i) & 0xffff0000) ;

printf("%4x",a);

}
