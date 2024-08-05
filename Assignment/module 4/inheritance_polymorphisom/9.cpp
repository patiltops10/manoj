
// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>

class Matrix {
private:
    int *data;
    int size;

public:
    // Constructor to initialize the matrix
    Matrix(int n) {
        size = n;
        data = new int[size];
    }

    // Destructor to free the memory
    ~Matrix() {
        delete[] data;
    }

    // Overload the [] operator to access matrix elements
    int& operator[](int index) {
        return data[index];
    }

    // Overload the + operator to add two matrices
    Matrix operator+(const Matrix& other) {
        if (size!= other.size) {
            throw std::runtime_error("Matrix sizes do not match.");
        }

        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result[i] = data[i] + other.data[i];
        }
        return result;
    }

    // Overload the << operator to print the matrix
    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {
        for (int i = 0; i < matrix.size; i++) {
            os << matrix.data[i] << " ";
        }
        os << std::endl;
        return os;
    }
};

int main() {
    int size;
    std::cout << "Enter the size of the matrices: ";
    std::cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    std::cout << "Enter elements of matrix 1: ";
    for (int i = 0; i < size; i++) {
        std::cin >> matrix1[i];
    }

    std::cout << "Enter elements of matrix 2: ";
    for (int i = 0; i < size; i++) {
        std::cin >> matrix2[i];
    }

    Matrix result = matrix1 + matrix2;

    std::cout << "Matrix 1: ";
    std::cout << matrix1;
    std::cout << "Matrix 2: ";
    std::cout << matrix2;
    std::cout << "Result: ";
    std::cout << result;

    return 0;
}