#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
 
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            start = i;

            while (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n')
                i++;

            reverse(sentence, start, i - 1);
        }
        i++;
    }

    printf("Output: %s", sentence);

    return 0;
}
