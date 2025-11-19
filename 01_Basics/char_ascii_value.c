#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    printf("ASCII value of '%c' is %d\n", c, (int)c);

    return 0;
}