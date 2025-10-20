#include <stdio.h>

//Function to merge two halves of the array.
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;   // Number of elements in left subarray
    int n2 = right - mid;      // Number of elements in right subarray

    int L[n1], R[n2];          // Temporary arrays to hold elements

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0;     // Initial index of left subarray
    int j = 0;     // Initial index of right subarray
    int k = left;  // Initial index of merged array

    // Merge the temp arrays back into arr[left...right]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements of R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/*
 * Recursive function that divides the array
 * into halves and then merges them after sorting.
 */
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Find the middle point
        int mid = left + (right - left) / 2;

        // Sort the first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

//Main function to test the merge sort implementation
int main() {
    int n;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Call merge sort function
    mergeSort(arr, 0, n - 1);

    // Print sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
