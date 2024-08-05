// Write a C++ program to implement a class called Employee that has
// private member variables for name, employee ID, and salary. Include
// member functions to calculate and set salary based on employee
// performance. Using of constructor

#include <iostream>
using namespace std;

class Employee {
private:
    int eid;             
    string name;       
    float salary;       

public:

    Employee(int id, string empName) {
        eid = id;
        name = empName;
        salary = 0; 
    }

    
    void setSalary(float performanceRating) {
        
        if (performanceRating >= 4.5) {
            salary = 50000; 
        } else if (performanceRating >= 3.0) {
            salary = 30000; 
        } else {
            salary = 20000; 
        }
    }

    
    void show() const {
        cout << "Employee ID: " << eid << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    int id;
    string name;
    float performanceRating;


    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter Employee Name: ";
    cin >> name;


    Employee emp(id, name);

    
    cout << "Enter Performance Rating (0.0 to 5.0): ";
    cin >> performanceRating;
    emp.setSalary(performanceRating);

    
    emp.show();

    return 0;
}