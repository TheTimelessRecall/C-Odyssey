#include <stdio.h>

int main() {
    int num, rem;
    int even_sum = 0, odd_sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;
        if (rem % 2 == 0)
            even_sum += rem;
        else
            odd_sum += rem;
        num /= 10;
    }

    printf("Sum of even digits = %d\n", even_sum);
    printf("Sum of odd digits = %d\n", odd_sum);

    return 0;
}
