// Write a C++ program to create a class called Triangle that has private
// member variables for the lengths of its three sides. Implement member
// functions to determine if the triangle is equilateral, isosceles, or scalene
//scalene all sides are unequal
//isosceles two sides are equal length
//equilateral all sides are equal length
#include<iostream>
using namespace std;

class Triangle {
private:
    float side1, side2, side3;

public:
    void inputSides() {
        cout << "Enter the three sides of the triangle: ";
        cin >> side1 >> side2 >> side3;
    }

    void determineType() {
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is equilateral." << endl;
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "The triangle is isosceles." << endl;
        } else {
            cout << "The triangle is scalene." << endl;
        }
    }
};

int main() {
    Triangle t;
    t.inputSides();
    t.determineType();

    return 0;
}