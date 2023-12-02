
#include <stdio.h>

int main() {
   int a, b, c, i, n;

   printf("enter the range:");
   scanf("%d",&n);

   printf("enter the values of a and b:");
   scanf("%d %d",&a,&b);

   printf("%d %d ",a,b);

   for(i = 1; i <= n-2; i++) {
      c = a + b;
      printf("%d ", c);

      a = b;
      b = c;
   }

   return 0;
}
