#include <stdio.h>
int main() {
    int n, originalNumber, remainder, sum = 0, numDigits = 0;
    long long powerResult;  // Used to prevent overflow for larger numbers

    printf("Enter a number: ");
    scanf("%d", &n);

    originalNumber = n;

    // Count the number of digits
    int tempNumber = n;
    while (tempNumber != 0) {
        tempNumber /= 10;
        numDigits++;
    }

    // Calculate sum of nth powers of digits
    tempNumber = originalNumber;
    while (tempNumber != 0) {
        remainder = tempNumber % 10;

        powerResult = 1;
        for (int i = 0; i < numDigits; i++) {
            powerResult *= remainder;
        }

        sum += powerResult;
        tempNumber /= 10;
    }

    // Check if it's an Armstrong number
    if (originalNumber == sum) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}
