#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isRotation(const char *s1, const char *s2) {
    int n1 = strlen(s1);
    int n2 = strlen(s2);

    if (n1 != n2) return 0;
    if (n1 == 0) return 1; 

    char *concat = malloc(n1 * 2 + 1);
    if (!concat) return 0;

    strcpy(concat, s1);
    strcat(concat, s1);

    int result = (strstr(concat, s2) != NULL);
    free(concat);
    return result;
}

int main() {
    char s1[200], s2[200];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    if (isRotation(s1, s2))
        printf("\"%s\" is a rotation of \"%s\"\n", s2, s1);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"\n", s2, s1);

    return 0;
}
