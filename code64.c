#include <stdio.h>

int main() {
    int num, digit;
    int freq[10] = {0}; 
    int maxFreq = 0, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;   
        freq[digit]++;      
        num /= 10;          
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring the most times: %d (occurs %d times)\n",
           maxDigit, maxFreq);

    return 0;
}
