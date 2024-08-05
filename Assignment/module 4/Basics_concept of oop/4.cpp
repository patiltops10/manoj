//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator{
    public:
    int num1,num2;
    int c;
    public:
    void addition(){
        cout<<"Enter number 1:";
        cin>>num1;
        cout<<"Enter number 2:";
        cin>>num2;
        c=num1+num2;
        cout<<"result="<<c;
    }
    void substraction(){
        cout<<"Enter number 1:";
        cin>>num1;
        cout<<"Enter nuber 2:";
        cin>>num2;
        c=num1-num2;
        cout<<"result="<<c;
    }

  void multiplication(){
        cout<<"Enter number 1:";
        cin>>num1;
        cout<<"Enter nuber 2:";
        cin>>num2;
        c=num1*num2;
        cout<<"result="<<c;
  }

    void divide(){
        cout<<"Enter number 1:";
        cin>>num1;
        cout<<"Enter nuber 2:";
        cin>>num2;
        c=num1/num2;
        cout<<"result="<<c;
    }
};

int main(){
    int ch;
    calculator cl;
  cout<<"Enter choice";
  cin>>ch;
    switch(ch) {
        case 1:
    cl.addition();
            break;
        case 2:
    cl.substraction();
            break;
        case 3:
    cl.multiplication();
            break;
        case 4:
    cl.divide();
            break;
        
        
    }
    



}
    

