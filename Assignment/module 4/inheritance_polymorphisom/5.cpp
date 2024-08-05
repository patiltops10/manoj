// 5. Assume that the test results of a batch of students are stored in three different
// classes. Class Students are storing the roll number. Class Test stores the
// marks obtained in two subjects and class result contains the total marks
// obtained in the test. The class result can inherit the details of the marks
// obtained in the test and roll number of students. (Multilevel Inheritance)
#include <iostream>

// Base class Students
class Students {
protected:
    int rollNumber;

public:
    // Constructor
    Students(int r) : rollNumber(r) {}

    // Member function to read roll number
    void readRollNumber() {
        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;
    }

    // Member function to write roll number
    void writeRollNumber() {
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

// Derived class Test
class Test : public Students {
protected:
    int marksSubject1;
    int marksSubject2;

public:
    // Constructor
    Test(int r, int m1, int m2) : Students(r), marksSubject1(m1), marksSubject2(m2) {}

    // Member function to read marks
    void readMarks() {
        Students::readRollNumber();
        std::cout << "Enter marks in subject 1: ";
        std::cin >> marksSubject1;
        std::cout << "Enter marks in subject 2: ";
        std::cin >> marksSubject2;
    }

    // Member function to write marks
    void writeMarks() {
        Students::writeRollNumber();
        std::cout << "Marks in Subject 1: " << marksSubject1 << std::endl;
        std::cout << "Marks in Subject 2: " << marksSubject2 << std::endl;
    }
};

// Derived class Result
class Result : public Test {
private:
    int totalMarks;

public:
    // Constructor
    Result(int r, int m1, int m2) : Test(r, m1, m2) {
        totalMarks = m1 + m2;
    }

    // Member function to read data
    void readData() {
        Test::readMarks();
    }

    // Member function to write data
    void writeData() {
        Test::writeMarks();
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }
};

int main() {
    // Create object
    Result r(1, 80, 90);

    // Read data
    std::cout << "Enter student data:" << std::endl;
    r.readData();

    // Write data
    std::cout << "Student data:" << std::endl;
    r.writeData();

    return 0;
}