#include <iostream>

class Max {
private:
    int a, b;

public:
    // Constructor to initialize the numbers
    Max(int x, int y) {
        a = x;
        b = y;
    }

    // Friend function to find the maximum number
    friend int max(Max m) {
        return (m.a > m.b) ? m.a : m.b;
    }

    // Function to display the numbers
    void display() {
        std::cout << "a = " << a << ", b = " << b << std::endl;
    }
};

int main() {
    Max m(10, 20);

    std::cout << "Numbers: ";
    m.display();

    int maximum = max(m);

    std::cout << "Maximum number: " << maximum << std::endl;

    return 0;
}