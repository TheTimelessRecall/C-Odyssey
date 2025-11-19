#include <stdio.h>

int main() {
    int number, sum_of_divisors = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check for negative input or if it's 0
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Calculate the sum of proper divisors (excluding the number itself)
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum_of_divisors += i;
        }
    }

    // Check if the number is a perfect number
    if (sum_of_divisors == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
