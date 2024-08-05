// Write a C++ Program to illustrates the use of Constructors in multilevel
// inheritance
#include <iostream>

// Base class
class GrandParent {
protected:
    int grandParentProperty;

public:
    // Constructor
    GrandParent(int gpp) : grandParentProperty(gpp) {
        std::cout << "GrandParent constructor called." << std::endl;
    }

    // Member function to display grand parent property
    void displayGrandParentProperty() {
        std::cout << "GrandParent property: " << grandParentProperty << std::endl;
    }
};

// Intermediate class
class Parent : public GrandParent {
protected:
    int parentProperty;

public:
    // Constructor
    Parent(int gpp, int pp) : GrandParent(gpp), parentProperty(pp) {
        std::cout << "Parent constructor called." << std::endl;
    }

    // Member function to display parent property
    void displayParentProperty() {
        std::cout << "Parent property: " << parentProperty << std::endl;
    }
};

// Derived class
class Child : public Parent {
private:
    int childProperty;

public:
    // Constructor
    Child(int gpp, int pp, int cp) : Parent(gpp, pp), childProperty(cp) {
        std::cout << "Child constructor called." << std::endl;
    }

    // Member function to display child property
    void displayChildProperty() {
        std::cout << "Child property: " << childProperty << std::endl;
    }

    // Member function to display all properties
    void displayAllProperties() {
        displayGrandParentProperty();
        displayParentProperty();
        displayChildProperty();
    }
};

int main() {
    // Create child object
    Child child(100, 200, 300);

    // Display all properties
    child.displayAllProperties();

    return 0;
}