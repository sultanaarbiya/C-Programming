#include<stdio.h>
int powercheck(int base, int power);

int main()
{
int product=1,power,base,check;
printf("enter the given base number:");
scanf("%d",&base);
printf("enter the given power number:");
scanf("%d",&power);
powercheck(base,power);
//printf("%d",product);
return 0;
}

int powercheck(int base, int power)
{
    int product=1;
while(power>0)
{
product=base*product;
power--;
}
printf("%d",product);
return product;
}
