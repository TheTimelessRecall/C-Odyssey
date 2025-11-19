#include <stdio.h>

int main() {
    int num_rows;
    int current_number = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &num_rows);

    for (int i = 1; i <= num_rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", current_number);
            current_number++;
        }
        printf("\n");
    }

    return 0;
}
