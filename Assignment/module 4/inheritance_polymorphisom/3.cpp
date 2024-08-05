// Create a class person having members name and age. Derive a class student
// having member percentage. Derive another class teacher having member
// salary. Write necessary member function to initialize, read and write data.
// Write also Main function (Multiple Inheritance)
#include <iostream>
#include <string>

// Base class Person
class Person {
protected:
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string n, int a) : name(n), age(a) {}

    // Member function to read data
    void readData() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    // Member function to write data
    void writeData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    float percentage;

public:
    // Constructor
    Student(std::string n, int a, float p) : Person(n, a), percentage(p) {}

    // Member function to read data
    void readData() {
        Person::readData();
        std::cout << "Enter percentage: ";
        std::cin >> percentage;
    }

    // Member function to write data
    void writeData() {
        Person::writeData();
        std::cout << "Percentage: " << percentage << std::endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    float salary;

public:
    // Constructor
    Teacher(std::string n, int a, float s) : Person(n, a), salary(s) {}

    // Member function to read data
    void readData() {
        Person::readData();
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }

    // Member function to write data
    void writeData() {
        Person::writeData();
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    // Create objects
    Student s("abhi", 20, 85.5);
    Teacher t("paras", 35, 50000.0);

    // Read data
    std::cout << "Enter student data:" << std::endl;
    s.readData();
    std::cout << "Enter teacher data:" << std::endl;
    t.readData();

    // Write data
    std::cout << "Student data:" << std::endl;
    s.writeData();
    std::cout << "Teacher data:" << std::endl;
    t.writeData();

    return 0;
}