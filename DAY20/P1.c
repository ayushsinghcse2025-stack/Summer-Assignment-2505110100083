#include <stdio.h>

#define MAX 10

void multiplyMatrices(int A[][MAX], int B[][MAX], int C[][MAX], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

void printMatrix(int M[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%4d", M[i][j]);
        printf("\n");
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Error: Columns of A (%d) must equal rows of B (%d).\n", c1, r2);
        return 1;
    }

    printf("Enter elements of matrix A (%dx%d):\n", r1, c1);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B (%dx%d):\n", r2, c2);
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    multiplyMatrices(A, B, C, r1, c1, c2);

    printf("\nMatrix A:\n");
    printMatrix(A, r1, c1);

    printf("\nMatrix B:\n");
    printMatrix(B, r2, c2);

    printf("\nResult (A x B):\n");
    printMatrix(C, r1, c2);

    return 0;
}