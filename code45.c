#include<stdio.h>

int main () {
    int n, i;
    float sum = 0.0;

    printf("Enetr the number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1.0;
        sum += numerator / denominator;
    }
    printf("Sum of the series up to %d terms is: %.6lf\n", n, sum);

    return 0;
}