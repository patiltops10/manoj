//. Perform 2D matrix array in c
#include <stdio.h>

// Function to initialize a 2D matrix with given dimensions
void initializeMatrix(int matrix[][3], int rows, int cols) {
    int value = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = value++;
        }
    }
}

// Function to print a 2D matrix with given dimensions
void printMatrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Example of a 3x3 matrix
    int matrix[3][3];

    // Initialize the matrix
    initializeMatrix(matrix, 3, 3);

    // Print the matrix
    printf("Matrix:\n");
    printMatrix(matrix, 3, 3);

    return 0;
}
