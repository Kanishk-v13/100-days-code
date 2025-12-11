#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    while (name[i] == ' ') i++; 
    printf("%c", toupper(name[i]));

    for (; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            printf("%c", toupper(name[i+1]));
        }
    }

    return 0;
}
