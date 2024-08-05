//copy constructor:creates same copy of already existing constructor in the program.
//syntax=>
//class_name(const classname &object_name);
#include<iostream>
using namespace std;
class values{
    public:
    int num1,num2;
    public:
    values(int a,int b){
        num1=a;
        num2=b;

    }
    values(const values &obj){
        num1=obj.num1;
        num2=obj.num2;
    }
    int show(){
        cout<<"Num1="<<num1<<"\n num2="<<num2<<endl;
    }
};
int main(){
    values v1(40,50);
    values v2=v1;
    v2.show();
}