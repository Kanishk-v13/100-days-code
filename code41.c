#include<stdio.h>
#include<math.h>

int main () {
    int num, firstdigit, lastdigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum = num;

    lastdigit = num % 10;

    digits = (int)log10(num);

    firstdigit = num / (int)pow(10, digits);

    num = num % (int)pow(10, digits);

    num = num / 10;

    swappedNum = lastdigit * (int)pow(10, digits) + num * 10 + firstdigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;

}