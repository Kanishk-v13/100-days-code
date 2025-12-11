#include <stdio.h>

int main() {
    int n;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int A[50][50];
    int isSymmetric = 1; 

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    if (isSymmetric)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is NOT symmetric.\n");

    return 0;
}
