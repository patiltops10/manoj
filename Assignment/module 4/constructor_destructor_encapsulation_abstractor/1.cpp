//Write a program to find the multiplication values and the cubic values using
//inline function
#include <iostream>
using namespace std;

// Inline function to calculate the cube of a number
inline int cub_fun(int side) { 
    return side * side * side; 
}

// Inline function to calculate the multiplication of two numbers
inline int multiply_fun(int a, int b) { 
    return a * b; 
}

int main() {
    int num;
    int a, b;

    // Getting the cube of a number
    cout << "Enter a number to find its cube: ";
    cin >> num;
    cout << "Cube of the given number = " << cub_fun(num) << endl;

    // Getting the multiplication of two numbers
    cout << "Enter two numbers to multiply: ";
    cin >> a >> b;
    cout << "Multiplication of the given numbers = " << multiply_fun(a, b) << endl;

    return 0;
}