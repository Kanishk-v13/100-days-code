#include<stdio.h>

int main() {
    int n;

    printf("Enter the valus of n: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++) {
        arr[i] = i+1;
    }
     
    printf("Numbers from 1 to %d are:\n", n);

    for (int i=0; i<n; i++) {
        printf("%d", arr[i]);
    } 

    printf("\n");
    return 0;
}