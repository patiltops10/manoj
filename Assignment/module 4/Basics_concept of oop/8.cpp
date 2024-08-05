
// 6. Write a C++ program to create a class called Person that has private
// member variables for name, age and country. Implement member
// functions to set and get the values of these variables.
// 6. Write a C++ program to create a class called Person that has private
// member variables for name, age and country. Implement member
// functions to set and get the values of these variables.

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Member function to set the values of private variables
    void setData() {
        cout << "Enter country name: ";
        cin >> country;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    // Member function to get the values of private variables
    void showData() {
        cout << "Country: " << country << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person ps;
    ps.setData();
    ps.showData();

    return 0;
}


