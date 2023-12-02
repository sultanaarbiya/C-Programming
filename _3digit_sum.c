#include<stdio.h>
int main()
{
   int num,rem,sum=0;
   printf("Enter the 3 digit number");//1234
   scanf("%d",&num);
   rem=num%10;//1234%10=4
   num=num/10;//123
   sum=sum+rem;//0+4=4;

   rem=num%10;//123%10=3
   num=num/10;//12
   sum=sum+rem;//4+3=7

   rem=num%10;//12%10=2
   num=num/10;//1
   sum=sum+rem;//7+2=9

   rem=num%10;//1
   num=num/10;//0
   sum=sum+rem;//9+1
   printf("%d",sum);
   return 0;

}
