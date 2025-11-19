#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Converting uppercase to lowercase
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else if ((ch >= 'a' && ch <= 'z')) {
        printf("%c is a consonant.\n", ch);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
