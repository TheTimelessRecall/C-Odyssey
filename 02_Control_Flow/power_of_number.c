#include <stdio.h>

int main() {
    int base, exponent;
    double result = 1.0;
    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the exponent (power): ");
    scanf("%d", &exponent);

    if (exponent >= 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    } else {
        for (int i = 0; i < -exponent; i++) {
            result /= base;
        }
    }

    printf("Result: %.4f\n", result);

    return 0;
}
