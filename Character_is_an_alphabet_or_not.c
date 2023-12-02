
#include<stdio.h>
int main()
{
char ch;
printf("enter the given character:");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
{
printf("the given character is the alphabet");
}
else
{
printf("the given character is  not an alphabet");
}
return 0;
}
