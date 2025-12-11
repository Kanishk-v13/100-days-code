#include<stdio.h>

int main () {
    int num, reversed = 0, remainder;

    printf("Enetr a number: ");
    scanf("%d", &num);

    int original= num;
    while(num !=0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    printf("Reversed number of %d =%d\n", original, reversed);
    return 0;
}