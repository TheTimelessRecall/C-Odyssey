#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int rows, cols;
    int nonZeroCount;
    int capacity;
    int *row_index;
    int *col_index;
    int *values;
} SparseMatrix;

SparseMatrix* createMatrix(int rows, int cols);
void freeMatrix(SparseMatrix* m);
void rebuildStorage(SparseMatrix* m, int newCap);
void setElement(SparseMatrix* m, int i, int j, int value);
int getElement(SparseMatrix* m, int i, int j);
void displayMatrix(SparseMatrix* m);
void displayCompressed(SparseMatrix* m);

SparseMatrix* createMatrix(int rows, int cols) {
    SparseMatrix* m = (SparseMatrix*) malloc(sizeof(SparseMatrix));
    m->rows = rows;
    m->cols = cols;
    m->nonZeroCount = 0;
    m->capacity = 4;
    m->row_index = (int*) malloc(m->capacity * sizeof(int));
    m->col_index = (int*) malloc(m->capacity * sizeof(int));
    m->values = (int*) malloc(m->capacity * sizeof(int));
    return m;
}

void freeMatrix(SparseMatrix* m) {
    free(m->row_index);
    free(m->col_index);
    free(m->values);
    free(m);
}

void rebuildStorage(SparseMatrix* m, int newCap) {
    m->capacity = newCap;
    m->row_index = (int*) realloc(m->row_index, newCap * sizeof(int));
    m->col_index = (int*) realloc(m->col_index, newCap * sizeof(int));
    m->values = (int*) realloc(m->values, newCap * sizeof(int));
}

void setElement(SparseMatrix* m, int i, int j, int value) {
    if (i < 0 || i >= m->rows || j < 0 || j >= m->cols) {
        printf("Index (%d,%d) out of bounds!\n", i, j);
        return;
    }

    for (int k = 0; k < m->nonZeroCount; k++) {
        if (m->row_index[k] == i && m->col_index[k] == j) {
            if (value == 0) {
                for (int t = k; t < m->nonZeroCount - 1; t++) {
                    m->row_index[t] = m->row_index[t + 1];
                    m->col_index[t] = m->col_index[t + 1];
                    m->values[t] = m->values[t + 1];
                }
                m->nonZeroCount--;
            } else {
                m->values[k] = value;
            }
            return;
        }
    }

    if (value != 0) {
        if (m->nonZeroCount == m->capacity)
            rebuildStorage(m, m->capacity * 2);

        m->row_index[m->nonZeroCount] = i;
        m->col_index[m->nonZeroCount] = j;
        m->values[m->nonZeroCount] = value;
        m->nonZeroCount++;
    }
}

int getElement(SparseMatrix* m, int i, int j) {
    if (i < 0 || i >= m->rows || j < 0 || j >= m->cols) {
        printf("Invalid indices (%d,%d)! Out of matrix bounds.\n", i, j);
        return -1; 
    }
    for (int k = 0; k < m->nonZeroCount; k++) {
        if (m->row_index[k] == i && m->col_index[k] == j)
            return m->values[k];
    }
    return 0;
}

void displayMatrix(SparseMatrix* m) {
    if (m->nonZeroCount == 0) {
        printf("Matrix is empty (all zeros).\n");
        return;
    }
    for (int i = 0; i < m->rows; i++) {
        for (int j = 0; j < m->cols; j++) {
            printf("%d ", getElement(m, i, j));
        }
        printf("\n");
    }
}

void displayCompressed(SparseMatrix* m) {
    if (m->nonZeroCount == 0) {
        printf("\nCompressed Form is empty (no non-zero elements).\n");
        return;
    }
    printf("\nCompressed Form:\n");
    printf("RowIdx: ");
    for (int k = 0; k < m->nonZeroCount; k++)
        printf("%d ", m->row_index[k]);
    printf("\nColIdx: ");
    for (int k = 0; k < m->nonZeroCount; k++)
        printf("%d ", m->col_index[k]);
    printf("\nValues: ");
    for (int k = 0; k < m->nonZeroCount; k++)
        printf("%d ", m->values[k]);
    printf("\n");
}

int main() {
    int rows, cols, n;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    SparseMatrix* mat = createMatrix(rows, cols);

    printf("Enter number of non-zero elements: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Enter (row column value) for each non-zero element:\n");
        for (int k = 0; k < n; k++) {
            int i, j, val;
            printf("Element %d -> ", k + 1);
            scanf("%d %d %d", &i, &j, &val);
            setElement(mat, i, j, val);
        }
    } else {
        printf("No non-zero elements. Matrix is fully zero.\n");
    }

    printf("\nFull Matrix:\n");
    displayMatrix(mat);

    displayCompressed(mat);

    char cont = 'y';
    while (cont == 'y' || cont == 'Y') {
        int qi, qj;
        printf("\nEnter a position to retrieve (row col): ");
        scanf("%d %d", &qi, &qj);
        int val = getElement(mat, qi, qj);
        if (val != -1) {
            printf("Value at (%d, %d) = %d\n", qi, qj, val);
        }
        printf("Do you want to query another element? (y/n): ");
        scanf(" %c", &cont);
    }

    freeMatrix(mat);
    printf("Program terminated.\n");
    return 0;
}
