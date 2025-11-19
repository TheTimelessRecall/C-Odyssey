#include <stdbool.h>
#include <stdio.h>

int main() {
    int start, end, i, num;
    bool isPrime;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (num = start; num <= end; num++) {
        if (num <= 1)
            continue;
        isPrime = true;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            printf("%d ", num);
    }
    printf("\n");
    return 0;
}
