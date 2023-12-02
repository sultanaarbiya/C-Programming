
#include<stdio.h>

void fibonacci(int *);

int main()
{
    int limit;

    printf("Enter the number of terms to be printed:");
    scanf("%d", &limit);

    fibonacci(&limit);

    return 0;
}

void fibonacci(int *num)
{
    int n1,n2;
    n1 = 0, n2 = 1;
    int n3, count;

    printf("\nFibonacci Series ..\n");
    printf(" %d\ %d\t", n1, n2);

    for(count = 1; count <= *num; count++)
    {
        n3 = n1 + n2;
        printf("%d\t", n3);

        n1 = n2;
        n2 = n3;
    }
}

