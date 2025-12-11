#include<stdio.h>

int main () {
    int num;
    long long binary = 0;
    int place = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

    if (num == 0) {
        printf("Binary of %d = 0\n", original);
        return 0;

    }

    while (num > 0) {
        int remainder = num % 2;
        binary = binary + remainder * place;
        place *= 10;
        num /= 2;

    }

    printf("Binary of %d = %lld\n", original, binary);

    return 0;
 }