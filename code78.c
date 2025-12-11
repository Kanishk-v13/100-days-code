#include <stdio.h>

int main() {
    int n;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int A[50][50];
    int sum = 0;

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        sum += A[i][i];
    }

    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
