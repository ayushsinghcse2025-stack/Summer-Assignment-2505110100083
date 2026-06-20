#include <stdio.h>

#define MAX 10

void inputMatrix(int M[][MAX], int n) {
    printf("Enter elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &M[i][j]);
}

void printMatrix(int M[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%4d", M[i][j]);
        printf("\n");
    }
}

int isSymmetric(int M[][MAX], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (M[i][j] != M[j][i])
                return 0;
    return 1;
}

int main() {
    int M[MAX][MAX];
    int n;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Error: Size must be between 1 and %d.\n", MAX);
        return 1;
    }

    inputMatrix(M, n);

    printf("\nEntered Matrix:\n");
    printMatrix(M, n);

    if (isSymmetric(M, n))
        printf("\nResult: The matrix IS symmetric (A[i][j] == A[j][i] for all i, j).\n");
    else
        printf("\nResult: The matrix is NOT symmetric.\n");

    return 0;
}