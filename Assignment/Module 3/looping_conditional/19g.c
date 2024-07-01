#include <stdio.h>

#define N 10 // Define the size of the matrix

void printSpiral(int n) {
    int matrix[N][N]; // Create a 2D array to store the spiral pattern
    int num = 1; // Start filling numbers from 1
    int topRow = 0, bottomRow = N - 1; // Initialize boundaries
    int leftCol = 0, rightCol = N - 1;
    
    while (topRow <= bottomRow && leftCol <= rightCol) {
        // Fill top row from left to right
        for (int col = leftCol; col <= rightCol; ++col) {
            matrix[topRow][col] = num++;
        }
        topRow++;
        
        // Fill right column from top to bottom
        for (int row = topRow; row <= bottomRow; ++row) {
            matrix[row][rightCol] = num++;
        }
        rightCol--;
        
        if (topRow <= bottomRow) {
            // Fill bottom row from right to left
            for (int col = rightCol; col >= leftCol; --col) {
                matrix[bottomRow][col] = num++;
            }
            bottomRow--;
        }
        
        if (leftCol <= rightCol) {
            // Fill left column from bottom to top
            for (int row = bottomRow; row >= topRow; --row) {
                matrix[row][leftCol] = num++;
            }
            leftCol++;
        }
    }
    
    // Print the matrix in spiral order
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printSpiral(N);
    return 0;
}
