#include<stdio.h>
int main()
{
char upr,lwr;
char lower_case,upper_case;
printf("enter the given character:");
scanf("%c",&lwr);
lower_case=lwr-32;
printf("%c character in the upper case %c\n ",lwr,lower_case);
/*printf("enter the given character:");
scanf("%c",&upr);
upper_case=lwr-32;
printf("%c character in the upper case %c ",upr,upper_case);*/

return 0;
}
