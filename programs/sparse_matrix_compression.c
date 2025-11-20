#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int rows, cols;
    int *A;   // values
    int *JA;  // column indices
    int *IA;  // row pointer
    int nnz;  // number of non-zero elements
} SparseMatrix;

SparseMatrix* createSparseMatrix(int rows, int cols, int **M) {
    SparseMatrix *s = malloc(sizeof(SparseMatrix));
    s->rows = rows;
    s->cols = cols;
    s->A = malloc(rows * cols * sizeof(int));
    s->JA = malloc(rows * cols * sizeof(int));
    s->IA = malloc((rows + 1) * sizeof(int));
    s->nnz = 0;
    s->IA[0] = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (M[i][j] != 0) {
                s->A[s->nnz] = M[i][j];
                s->JA[s->nnz] = j;
                s->nnz++;
            }
        }
        s->IA[i + 1] = s->nnz;
    }
    return s;
}

void set(SparseMatrix *s, int i, int j, int val) {
    if (i < 0 || i >= s->rows || j < 0 || j >= s->cols) return;
    int start = s->IA[i], end = s->IA[i + 1];
    for (int k = start; k < end; k++)
        if (s->JA[k] == j) { s->A[k] = val; return; }
}

int get(SparseMatrix *s, int i, int j) {
    if (i < 0 || i >= s->rows || j < 0 || j >= s->cols) return 0;
    int start = s->IA[i], end = s->IA[i + 1];
    for (int k = start; k < end; k++)
        if (s->JA[k] == j) return s->A[k];
    return 0;
}

void display(SparseMatrix *s) {
    if (s->rows == 0 || s->cols == 0) { printf("[]\n"); return; }
    for (int i = 0; i < s->rows; i++) {
        for (int j = 0; j < s->cols; j++)
            printf("%d ", get(s, i, j));
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int **M = malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        M[i] = malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++)
            scanf("%d", &M[i][j]);
    }

    SparseMatrix *s = createSparseMatrix(rows, cols, M);
    printf("\nCompressed arrays created using CSR format.\n\n");

    printf("Matrix:\n");
    display(s);

    printf("\nEnter position (i j) to get value: ");
    int i, j; scanf("%d %d", &i, &j);
    printf("Value at (%d,%d): %d\n", i, j, get(s, i, j));

    printf("\nEnter position (i j) and new value to set: ");
    int val; scanf("%d %d %d", &i, &j, &val);
    set(s, i, j, val);
    printf("\nMatrix after update:\n");
    display(s);

    for (i = 0; i < rows; i++) free(M[i]);
    free(M);
    free(s->A); free(s->JA); free(s->IA); free(s);
    return 0;
}
