
// 5. Write a C++ program to create a class called Rectangle that has private
// member variables for length and width. Implement member functions to
// calculate the rectangle's area and perimeter.

#include<iostream>
using namespace std;
#define pi 3.14
class rectangle{
    private:
    int length,width;
    public:
    int a,p;
int area(int length ,int width){
     a = length*width;
    
        return a;
    }

    int perimeter(int length,int width){
        
        p = (length+width)*2; 
      return p;
    }

};
int main() {
    rectangle rl; 

    int length,width;

    // Input length and width from user
    cout << "Enter Length: ";
    cin >> length;

    cout << "Enter Width: ";
    cin >> width;


    int area = rl.area(length,width);
    cout << "Area is: " << area << endl;


    int perimeter = rl.perimeter(length,width);
    cout << "Perimeter is: " << perimeter << endl;

    return 0;
}

