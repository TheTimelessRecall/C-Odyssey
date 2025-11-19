#include <stdio.h>

int main() {
    int num1, num2, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Use Euclidean algorithm to find HCF (GCD)
    while (num2 != 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    printf("HCF: %d\n", num1);

    return 0;
}
