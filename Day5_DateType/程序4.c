#include <stdio.h>

#define ROWS 2
#define COLS 3

void print_matrix(int m[ROWS][COLS], int rows, int cols);
void add_matrix(int a[ROWS][COLS], int b[ROWS][COLS], int result[ROWS][COLS]);

int main() {
    int A[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};
    int B[ROWS][COLS] = {{6, 5, 4}, {3, 2, 1}};
    int C[ROWS][COLS];

    add_matrix(A, B, C);

    printf("æÿ’ÛA£∫\n");
    print_matrix(A, ROWS, COLS);
    printf("æÿ’ÛB£∫\n");
    print_matrix(B, ROWS, COLS);
    printf("æÿ’ÛA+B£∫\n");
    print_matrix(C, ROWS, COLS);

    return 0;
}

void print_matrix(int m[ROWS][COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
}

void add_matrix(int a[ROWS][COLS], int b[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}
