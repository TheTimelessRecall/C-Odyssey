#include <stdio.h>

int main() {
    int number, original_number, remainder;
    long long sum_of_factorials = 0;  // Use long long for sum to prevent overflow

    printf("Enter a number: ");
    scanf("%d", &number);

    original_number = number;

    while (number > 0) {
        remainder = number % 10;

        // Calculate factorial of the current digit
        long long factorial = 1;
        for (int i = 1; i <= remainder; i++) {
            factorial *= i;
        }

        sum_of_factorials += factorial;
        number /= 10;
    }

    if (original_number == sum_of_factorials) {
        printf("%d is a strong number.\n", original_number);
    } else {
        printf("%d is not a strong number.\n", original_number);
    }

    return 0;
}
