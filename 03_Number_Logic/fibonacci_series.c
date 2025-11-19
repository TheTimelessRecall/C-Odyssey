#include <stdio.h>

int main() {
    int i, n;
    int term1 = 0, term2 = 1;
    int next_term = term1 + term2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    if (n == 1) {
        printf("%d", term1);
    } else if (n >= 2) {
        printf("%d, %d", term1, term2);

        for (i = 3; i <= n; ++i) {
            printf(", %d", next_term);
            term1 = term2;
            term2 = next_term;
            next_term = term1 + term2;
        }
    }

    printf("\n");

    return 0;
}
