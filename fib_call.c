#include <stdio.h>
void fibonacci(int n);
int main() {
   int  n;
   printf("enter the range:");
   scanf("%d",&n);
   fibonacci(n);

   return 0;
   }

   void fibonacci(int n)
   {
   int i,c,a=1,b=2;
   for(i = 1; i <= n; i++)
   {
      c = a + b;
      printf("%d",c);
      a = b;
      b = c;
   }

}
