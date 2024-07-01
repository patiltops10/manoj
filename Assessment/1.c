#include <stdio.h>

#define MAX 10

void inputMatrix(int matrix[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

int main() {
    int row1, col1, row2, col2;
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2) {
        printf("Error! The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return -1;
    }

    printf("Enter elements of the first matrix:\n");
    inputMatrix(first, row1, col1);

    printf("Enter elements of the second matrix:\n");
    inputMatrix(second, row2, col2);

    multiplyMatrices(first, second, result, row1, col1, row2, col2);

    printf("First Matrix:\n");
    printMatrix(first, row1, col1);

    printf("Second Matrix:\n");
    printMatrix(second, row2, col2);

    printf("Resultant Matrix after multiplication:\n");
    printMatrix(result, row1, col2);

    return 0;
}