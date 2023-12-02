#include<stdio.h>
int main()
{
unsigned char num=10;
unsigned int bit1,bit2,swap;
for(int i=0;i<31;i++)
{
    bit1=(num>>i)&1;
    bit2=(num>>i+1)&1;
  swap= bit1^bit2;
  printf("%d",swap);
}

}
