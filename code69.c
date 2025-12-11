#include <stdio.h>

int main() {
    int arr[100], n;
    int largest, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Array must contain at least 2 elements.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = secondLargest = -2147483648;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -2147483648)
        printf("No second largest (all elements equal).\n");
    else
        printf("Second largest element = %d\n", secondLargest);

    return 0;
}
