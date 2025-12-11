#include <stdio.h>

int main() {
    int n;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int A[50][50];
    int diag[50];   

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        diag[i] = A[i][i];
    }

    int distinct = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are NOT distinct.\n");

    return 0;
}
