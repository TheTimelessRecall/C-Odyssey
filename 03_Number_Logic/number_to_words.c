#include <stdio.h>

void print_units(int n) {
    switch (n) {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
    }
}

void print_tens(int n) {
    switch (n) {
        case 10:
            printf("Ten");
            break;
        case 11:
            printf("Eleven");
            break;
        case 12:
            printf("Twelve");
            break;
        case 13:
            printf("Thirteen");
            break;
        case 14:
            printf("Fourteen");
            break;
        case 15:
            printf("Fifteen");
            break;
        case 16:
            printf("Sixteen");
            break;
        case 17:
            printf("Seventeen");
            break;
        case 18:
            printf("Eighteen");
            break;
        case 19:
            printf("Nineteen");
            break;
        case 2:
            printf("Twenty");
            break;
        case 3:
            printf("Thirty");
            break;
        case 4:
            printf("Forty");
            break;
        case 5:
            printf("Fifty");
            break;
        case 6:
            printf("Sixty");
            break;
        case 7:
            printf("Seventy");
            break;
        case 8:
            printf("Eighty");
            break;
        case 9:
            printf("Ninety");
            break;
    }
}

void number_to_words(int num) {
    if (num == 0) {
        printf("Zero");
        return;
    }

    if (num >= 100) {
        print_units(num / 100);
        printf(" Hundred ");
        num %= 100;
    }

    if (num >= 20) {
        print_tens(num / 10);
        num %= 10;
        if (num)
            printf(" ");
    } else if (num >= 10 && num <= 19) {
        print_tens(num);
        return;
    }

    if (num > 0 && num < 10) {
        print_units(num);
    }
}

int main() {
    int num;
    printf("Enter a number (0-999): ");
    scanf("%d", &num);
    if (num < 0 || num > 999) {
        printf("Out of range!\n");
        return 1;
    }
    number_to_words(num);
    printf("\n");
    return 0;
}
