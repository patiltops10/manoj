// Write a program to Mathematic operation like Addition, Subtraction,
// Multiplication, Division Of two number using different parameters and
// Function Overloading
#include <iostream>

// Function to perform addition
int add(int a, int b) {
    return a + b;
}

// Function to perform addition with float parameters
float add(float a, float b) {
    return a + b;
}

// Function to perform addition with double parameters
double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function to perform subtraction with float parameters
float subtract(float a, float b) {
    return a - b;
}

// Function to perform subtraction with double parameters
double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function to perform multiplication with float parameters
float multiply(float a, float b) {
    return a * b;
}

// Function to perform multiplication with double parameters
double multiply(double a, double b) {
    return a * b;
}

// Function to perform division
float divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero is not allowed.");
    }
    return static_cast<float>(a) / b;
}

// Function to perform division with float parameters
float divide(float a, float b) {
    if (b == 0.0f) {
        throw std::runtime_error("Division by zero is not allowed.");
    }
    return a / b;
}

// Function to perform division with double parameters
double divide(double a, double b) {
    if (b == 0.0) {
        throw std::runtime_error("Division by zero is not allowed.");
    }
    return a / b;
}

int main() {
    int num1 = 10;
    int num2 = 2;

    float floatNum1 = 10.5f;
    float floatNum2 = 2.5f;

    double doubleNum1 = 10.5;
    double doubleNum2 = 2.5;

    // Perform addition
    std::cout << "Addition of " << num1 << " and " << num2 << ": " << add(num1, num2) << std::endl;
    std::cout << "Addition of " << floatNum1 << " and " << floatNum2 << ": " << add(floatNum1, floatNum2) << std::endl;
    std::cout << "Addition of " << doubleNum1 << " and " << doubleNum2 << ": " << add(doubleNum1, doubleNum2) << std::endl;

    // Perform subtraction
    std::cout << "Subtraction of " << num1 << " and " << num2 << ": " << subtract(num1, num2) << std::endl;
    std::cout << "Subtraction of " << floatNum1 << " and " << floatNum2 << ": " << subtract(floatNum1, floatNum2) << std::endl;
    std::cout << "Subtraction of " << doubleNum1 << " and " << doubleNum2 << ": " << subtract(doubleNum1, doubleNum2) << std::endl;

    // Perform multiplication
    std::cout << "Multiplication of " << num1 << " and " << num2 << ": " << multiply(num1, num2) << std::endl;
    std::cout << "Multiplication of " << floatNum1 << " and " << floatNum2 << ": " << multiply(floatNum1, floatNum2) << std::endl;
    std::cout << "Multiplication of " << doubleNum1 << " and " << doubleNum2 << ": " << multiply(doubleNum1, doubleNum2) << std::endl;

    // Perform division
    try {
        std::cout << "Division of " << num1 << " and " << num2 << ": " << divide(num1, num2) << std::endl;
        std::cout << "Division of " << floatNum1 << " and " << floatNum2 << ": " << divide(floatNum1, floatNum2) << std::endl;
        std::cout << "Division of " << doubleNum1 << " and " << doubleNum2 << ": " << divide(doubleNum1, doubleNum2) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}