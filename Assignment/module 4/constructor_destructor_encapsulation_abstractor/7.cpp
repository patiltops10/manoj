// Write a C++ program to implement a class called Date that has private
// member variables for day, month, and year. Include member functions to
// set and get these variables, as well as to validate if the date is valid.
#include<iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    // Constructor to initialize date
    Date(int d = 1, int m = 1, int y = 2022) {
        setDay(d);
        setMonth(m);
        setYear(y);
    }

    // Member functions to set day, month, and year
    void setDay(int d) {
        if (d >= 1 && d <= 31) {
            day = d;
        } else {
            cout << "Invalid day. Setting day to 1." << endl;
            day = 1;
        }
    }

    void setMonth(int m) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            cout << "Invalid month. Setting month to 1." << endl;
            month = 1;
        }
    }

    void setYear(int y) {
        if (y >= 1900 && y <= 2100) {
            year = y;
        } else {
            cout << "Invalid year. Setting year to 2022." << endl;
            year = 2022;
        }
    }

    // Member functions to get day, month, and year
    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }

    // Member function to validate date
    bool isValidDate() {
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                return day >= 1 && day <= 29;
            } else {
                return day >= 1 && day <= 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            return day >= 1 && day <= 30;
        } else {
            return day >= 1 && day <= 31;
        }
    }

    // Member function to display date
    void displayDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d(29, 2, 2020);
    d.displayDate();

    if (d.isValidDate()) {
        cout << "The date is valid." << endl;
    } else {
        cout << "The date is not valid." << endl;
    }

    return 0;
}