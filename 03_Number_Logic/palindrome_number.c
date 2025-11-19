#include <stdio.h>

int main() {
    int number, original_number, remainder, reversed_number = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    original_number = number;

    while (number != 0) {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }

    if (original_number == reversed_number) {
        printf("%d is a palindrome.\n", original_number);
    } else {
        printf("%d is not a palindrome.\n", original_number);
    }

    return 0;
}
