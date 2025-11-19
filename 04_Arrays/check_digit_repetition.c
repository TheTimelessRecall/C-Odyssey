#include <stdio.h>
#define N 10

int main() {
    int digit_counts[N] = {0};  // Array to track digit occurrences
    int num, remainder;

    printf("Enter the number: ");
    scanf("%d", &num);

    // Loop through each digit of the number
    while (num != 0) {
        remainder = num % 10;

        if (digit_counts[remainder] == 1) {
            break;  // Digit repeated, exit loop
        }

        digit_counts[remainder] = 1;
        num /= 10;
    }

    // Determine and print if any digit was repeated
    if (num == 0) {
        printf("Not repeated\n");
    } else {
        printf("Repeated\n");
    }

    return 0;
}
