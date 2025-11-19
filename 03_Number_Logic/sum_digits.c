
#include <stdio.h>

int main(void) {
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Keep dividing until the number becomes zero
    while (num != 0) {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of digits is %d", sum);
    return 0;
}