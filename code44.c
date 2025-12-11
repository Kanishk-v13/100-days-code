#include<stdio.h>

int main () {
   int n;
   double sum = 0.0;

   printf("Enter a number of terms: ");
   scanf("%d", &n);

   for(int i = 1; i <= n; i++) {
    sum += (double)(2 * i - 1) / (2 * i);
   }
   printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

   return 0;
}