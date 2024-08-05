//2. Write a program of Addition, Subtraction, Division, Multiplication using
//constructor
#include <iostream>
using namespace std;

class Calculator {
    private:
        int num1, num2;
    public:
        // Constructor
        Calculator(int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }

        // Method to perform addition
        int add() {
            return num1 + num2;
        }

        // Method to perform subtraction
        int subtract() {
            return num1 - num2;
        }

        // Method to perform multiplication
        int multiply() {
            return num1 * num2;
        }

        // Method to perform division
        int divide() {
            if (num2 != 0) {
                return num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed" << endl;
                return 0;
            }
        }
};

int main() {
    // Create an instance of the Calculator class
    Calculator calculator(50, 5);

    // Perform calculations
    cout << "Addition: " << calculator.add() << endl;
    cout << "Subtraction: " << calculator.subtract() << endl;
    cout << "Multiplication: " << calculator.multiply() << endl;
    cout << "Division: " << calculator.divide() << endl;

    return 0;
}