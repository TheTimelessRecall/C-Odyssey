#include <stdio.h>

int main() {
    int n, i, target, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter the element to search: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("%d found at position %d.\n", target, i + 1);
    else
        printf("%d not found in the array.\n", target);

    return 0;
}
