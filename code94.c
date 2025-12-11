#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[200];
    char longest[50];
    int maxLen = 0, currentLen = 0;
    int i, j = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {

        if (sentence[i] != ' ' && sentence[i] != '\n') {
            currentLen++;
        } 
        else {

            if (currentLen > maxLen) {
                maxLen = currentLen;

                int start = i - currentLen;
                for (j = 0; j < currentLen; j++)
                    longest[j] = sentence[start + j];
                longest[j] = '\0';
            }
            currentLen = 0; 
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
