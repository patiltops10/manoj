//Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.
#include <iostream>
using namespace std;

#define pi 3.14

class circle{
    private:
    int radius, area,circumference;

    public:
    int area(int radius){

        area = pi * radius * radius;
        return area;
    }

    int cirumference(int radius){
        
        circumference = 2 * pi * radius; 
      return circumference;
    }
};
int main(){
    int radius;
    circle c1;

    cout << "Enter Radius: ";
    cin >> radius;

    cout << "Area is: " << c1.area(radius) << endl;
    cout << "Circumference is: "<< c1.cirumference(radius);
    
    return 0;
}