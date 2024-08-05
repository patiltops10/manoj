// Write a program to calculate the area of circle, rectangle and triangle
// using Function Overloading
// Rectangle: Area * 
// breadth Triangle: ½
// *Area* breadthCircle: 
// Pi * Area *Area
#include <iostream>
#include <cmath>

class Shape {
public:
    // Function to calculate the area of a rectangle
    double area(double length, double breadth) {
        return length * breadth;
    }

    // Function to calculate the area of a triangle
    double area(double base, double height) {
        return 0.5 * base * height;
    }

    // Function to calculate the area of a circle
    double area(double radius) {
        return M_PI * radius * radius;
    }
};

int main() {
    Shape shape;

    double length, breadth, base, height, radius;

    std::cout << "Enter the length and breadth of the rectangle: ";
    std::cin >> length >> breadth;
    std::cout << "Area of the rectangle: " << shape.area(length, breadth) << std::endl;

    std::cout << "Enter the base and height of the triangle: ";
    std::cin >> base >> height;
    std::cout << "Area of the triangle: " << shape.area(base, height) << std::endl;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Area of the circle: " << shape.area(radius) << std::endl;

    return 0;
}