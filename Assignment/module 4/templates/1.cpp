// Write a program of to swap the two values using template
#include <iostream>

// Template function to swap two values
template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    swap(x, y);

    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    double dx = 3.5, dy = 7.2;
    std::cout << "Before swapping: dx = " << dx << ", dy = " << dy << std::endl;

    swap(dx, dy);

    std::cout << "After swapping: dx = " << dx << ", dy = " << dy << std::endl;

    char cx = 'A', cy = 'B';
    std::cout << "Before swapping: cx = " << cx << ", cy = " << cy << std::endl;

    swap(cx, cy);

    std::cout << "After swapping: cx = " << cx << ", cy = " << cy << std::endl;

    return 0;
}