#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // VLAs are a C99 feature
    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element a[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Before reversing: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("After reversing: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
