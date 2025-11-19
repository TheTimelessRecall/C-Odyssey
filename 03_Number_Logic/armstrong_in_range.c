#include <math.h>
#include <stdio.h>

int isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;

    while (temp != 0) {  // Count digits
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp != 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int start, end;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
