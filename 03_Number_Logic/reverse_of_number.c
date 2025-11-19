#include <stdio.h>

int main() {
    int number, remainder, reversed_number = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversed_number);

    return 0;
}
