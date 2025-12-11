#include<stdio.h>
#include<math.h>

int main() {
    int num, original, remainder, n=0;
    int temp;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    temp = num;
    while (temp != 0) {
        temp = temp / 10;
        n++; 
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp = temp / 10;
    }

    if ((int) result == num)
        printf("%d is an Armstrong Number.\n", num);
    else 
        printf("%d is NOT Armstrong Number.\n", num);

    return 0;
        

}