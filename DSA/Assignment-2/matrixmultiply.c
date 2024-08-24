#include <stdio.h>

void readMatrix(int matrix[][10], int rows, int cols);
void printMatrix(int matrix[][10], int rows, int cols);
void multiplyMatrices(int mat1[][10], int mat2[][10], int res[][10], int r1, int c1, int r2, int c2);

int main() {
    int mat1[10][10], mat2[10][10], result[10][10];
    int r1, c1, r2, c2;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the first matrix (%d x %d):\n", r1, c1);
    readMatrix(mat1, r1, c1);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter the second matrix (%d x %d):\n", r2, c2);
    readMatrix(mat2, r2, c2);

    if (c1 != r2) {
        printf("Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    multiplyMatrices(mat1, mat2, result, r1, c1, r2, c2);

    printf("Resultant matrix (%d x %d):\n", r1, c2);
    printMatrix(result, r1, c2);

    return 0;
}

void readMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int mat1[][10], int mat2[][10], int res[][10], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
