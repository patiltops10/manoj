//write a c++ program to find area of rectangle using inheritance.
#include <iostream>
using namespace std;

class Reactangle{
    public:
    int length, width;

    protected:
    void input(){
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;

    }

};

class Area : private Reactangle{

    int a;

    public:
    void calculate(){

        input();

        a = length * width;

        cout << "Area of ractangle is: " << a ;

    }
};

int main(){

    Area a1;
    a1.calculate();
    

    return 0;
}
