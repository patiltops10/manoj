#include <iostream>

class Swap {
private:
    int a, b;

public:
    // Constructor to initialize the numbers
    Swap(int x, int y) {
        a = x;
        b = y;
    }

    // Friend function to swap the numbers
    friend void swap(Swap& s) {
        s.a = s.a + s.b;
        s.b = s.a - s.b;
        s.a = s.a - s.b;
    }

    // Function to display the numbers
    void display() {
        std::cout << "a = " << a << ", b = " << b << std::endl;
    }
};

int main() {
    Swap s(5, 10);

    std::cout << "Before swapping: ";
    s.display();

    swap(s);

    std::cout << "After swapping: ";
    s.display();

    return 0;
}