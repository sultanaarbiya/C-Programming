#include<stdio.h>
int main()
{
int i,j,square=1,cube=1;
int arr1[3][3]={2,3,4,5,6,7,8,9};
printf("The matrix is \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",arr1[i][j]);
}
printf("\n");
}
printf("The square and cube of each element in 2d array is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
square=arr1[i][j]*arr1[i][j];
cube=arr1[i][j]*arr1[i][j]*arr1[i][j];
{
printf("The square of %d element is %d\n",arr1[i][j],square);
printf("The cube of %d element is %d\n",arr1[i][j],cube);
}
}
}
return 0;
}
