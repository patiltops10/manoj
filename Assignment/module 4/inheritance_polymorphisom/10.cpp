// 10.Write a program to concatenate the two strings using Operator Overloading
#include <iostream>
#include <cstring>

class String {
private:
    char* data;

public:
    // Constructor to initialize the string
    String(const char* str) {
        int len = strlen(str);
        data = new char[len + 1];
        strcpy(data, str);
    }

    // Destructor to free the memory
    ~String() {
        delete[] data;
    }

    // Overload the + operator to concatenate two strings
    String operator+(const String& other) {
        int len1 = strlen(data);
        int len2 = strlen(other.data);
        char* temp = new char[len1 + len2 + 1];

        strcpy(temp, data);
        strcat(temp, other.data);

        String result(temp);
        delete[] temp;
        return result;
    }

    // Overload the << operator to print the string
    friend std::ostream& operator<<(std::ostream& os, const String& str) {
        os << str.data;
        return os;
    }
};

int main() {
    String str1("Hello");
    String str2(" World");

    String result = str1 + str2;

    std::cout << "String 1: " << str1 << std::endl;
    std::cout << "String 2: " << str2 << std::endl;
    std::cout << "Result: " << result << std::endl;

    return 0;
}