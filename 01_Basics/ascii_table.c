#include <stdio.h>

int main() {
    printf("ASCII Table:\n");
    printf("Char  ASCII\n");
    for (int i = 32; i < 127; i++) {
        printf("  %c     %d\n", i, i);
    }
    return 0;
}
