#include<stdio.h>

int main () {

    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enetr a operator (+,-,*,/,%%): ");
    scanf(" %c", &op);

    printf("Enetr second number: ");
    scanf("%d", &num2);

    switch (op) {
        case '+':
        printf("Result: %d\n", num1+num2);
        break;

        case '-':
        printf("Result: %d\n", num1-num2);
        break;

        case '*':
        printf("Result: %d\n", num1*num2);
        break;

        case '/':
        printf("Result: %d\n", num1/num2);
        break;

        case '%':
        printf("Result: %d\n", num1%num2);
        break;
    }
    return 0;

}