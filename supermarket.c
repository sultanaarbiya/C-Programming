#include<stdio.h>
int main()
{
int item,chocolate,chocolates,biscuits,biscuit,chips,chip,sum;
chocolate=20;
biscuit =10;
chip=50;
printf("enter the no of chocolates: ");
scanf("%d",&item);
chocolates = item*chocolate;
printf("enter the no of biscuits: ");
scanf("%d",&item);
biscuits = item*biscuit;
printf("enter the no of chips: ");
scanf("%d",&item);
chips = item*chip;

printf("Super Market\n");

printf("Item\t\tPrice\n");
printf("chocolates\t%d\n biscuits\t%d\n chips\t%d\n",chocolates,biscuits,chips);
sum=chocolates+biscuits+chips;
printf("The total bill amount is: %d",sum);
scanf("%d",&sum);
return 0;
}
