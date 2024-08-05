// Write a C++ program to implement a class called Student that has private
// member variables for name, class, roll number, and marks. Include
// member functions to calculate the grade based on the marks and display
// the student's information. Accept address from each student implement
// using of aggregation
#include <iostream>
using namespace std;

// Class to represent Address
class Address {
private:
    string street;
    string city;
    string state;

public:
    // Constructor to initialize Address
    Address(string st, string ct, string stt) : street(st), city(ct), state(stt) {}

    // Function to display address
    void display() const {
        cout << "Address: " << street << ", " << city << ", " << state << endl;
    }
};

// Class to represent Student
class Student {
private:
    int rollno;
    string name;
    float marks;
    Address address; // Aggregation of Address class

public:
    // Constructor to initialize Student with Address
    Student(int rno, string nm, float mks, Address addr) : rollno(rno), name(nm), marks(mks), address(addr) {}

    // Function to calculate grade based on marks
    char calculateGrade() const {
        if (marks >= 90)
            return 'A';
        else if (marks >= 75)
            return 'B';
        else if (marks >= 50)
            return 'C';
        else
            return 'D';
    }

    // Function to display student information
    void display() const {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address.display(); // Display address
    }
};

int main() {
    // Input for student details
    int rollno;
    string name, street, city, state;
    float marks;

    cout << "Enter Roll No: ";
    cin >> rollno;
    cout << "Enter Name: ";
    cin.ignore(); // To ignore newline character left in buffer
    getline(cin, name);
    cout << "Enter Marks: ";
    cin >> marks;
    cout << "Enter Street: ";
    cin.ignore(); // To ignore newline character left in buffer
    getline(cin, street);
    cout << "Enter City: ";
    getline(cin, city);
    cout << "Enter State: ";
    getline(cin, state);

    // Create Address object
    Address addr(street, city, state);

    // Create Student object using the constructor
    Student stud(rollno, name, marks, addr);

    // Display student information
    stud.display();

    return 0;
}