#include<stdio.h>
int printnum();

int main()
{
printnum();
return 0;
}

int printnum()
{
    int i,j,count;
    for(i=1;i<=100;i++)
    {
        count=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)

                count=0;

        }
        if(count==1)

            printf("%d\n",j);

    }
}
