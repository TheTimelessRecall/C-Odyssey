#include <stdio.h>

int main() {
    int n, i, target, low, high, mid, found = 0;

    printf("Enter number of elements (sorted): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &target);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target) {
            found = 1;
            break;
        } else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found)
        printf("%d found at position %d.\n", target, mid + 1);
    else
        printf("%d not found in the array.\n", target);

    return 0;
}
