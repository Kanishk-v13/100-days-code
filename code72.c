#include <stdio.h>

int main() {
    int a[10][10], rows, cols, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += a[i][j];
        }
    }

    printf("Sum of all elements in the matrix = %d\n", sum);

    return 0;
}
