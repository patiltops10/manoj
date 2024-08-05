//parameterized constructor
//default constructor
#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
    A(int a,int b){

cout<<a<<endl<<b;
    }

};    

int main()
{
    A obj(100,200);

 return 0;
}