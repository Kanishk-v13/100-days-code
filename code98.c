#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    char words[10][20];
    int count = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int i = 0, j = 0, k = 0;
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] != ' ') {
            words[j][k++] = name[i];
        } else if (k > 0) {
            words[j][k] = '\0';
            j++;
            k = 0;
        }
        i++;
    }
    if (k > 0) {
        words[j][k] = '\0';
        j++;
    }
    count = j;

    for (i = 0; i < count - 1; i++) {
        printf("%c.", toupper(words[i][0]));
    }

    printf("%s\n", words[count - 1]);

    return 0;
}
