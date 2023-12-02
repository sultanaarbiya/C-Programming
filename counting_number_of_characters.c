#include<stdio.h>
int main()
{
char ch;//ch is declared
int num_char=0;//char is intialized to 0

printf("enter the name");//taking the name

while(ch=getchar()!='\n')
{
num_char=num_char+1;
}
printf("num-char=%d",num_char);
}
