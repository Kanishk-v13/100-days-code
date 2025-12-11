#include <stdio.h>

int main() {
    double num1, num2;  
    
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);

    
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2; 
    double Quotient = num1 / num2;

    
    if (num2 != 0) {
        double quotient = num1 / num2;
        printf("\nResults:\n");
        printf("Sum = %.2lf\n", sum);
        printf("Difference = %.2lf\n", difference);
        printf("Product = %.2lf\n", product);
        printf("Quotient = %.2lf\n",Quotient);
    }
    return 0;
}