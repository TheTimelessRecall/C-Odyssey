#include <stdio.h>

int main() {
    int n, remainder, decimal = 0, base = 1;

    printf("Enter the binary number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;                    // Get the last digit (0 or 1)
        decimal = decimal + remainder * base;  // Add to decimal equivalent
        n = n / 10;                            // Remove the last digit
        base = base * 2;                       // Update the base power of 2
    }

    printf("Decimal number: %d\n", decimal);

    return 0;
}