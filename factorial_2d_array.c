#include<stdio.h>
int main()
{
int i,j,k,fact=1;
int arr1[3][3]={1,2,3,5,7,9,12,15,17};
printf("The matrix is \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",arr1[i][j]);
}
printf("\n");
}
printf("The factorial of all elements in 2d array are:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
fact=fact*arr1[i][j];
printf("The factorial of %d element is %d\n",arr1[i][j],fact);
}

}
return 0;
}
