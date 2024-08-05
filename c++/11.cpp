//single inheritance
#include<iostream>
using namespace std;
class person{
    public:
    int pid;
    string name;
    public:
    int get_det(){
        cout<<"Enter pid:";
        cin>>pid;
        cin.ignore();
        cout<<"Enter name:";
        getline(cin,name);
    }
    int show(){
        cout<<"Pid="<<pid<<"\n Name="<<name<<endl;
    }
};
class employee:public person{
    public:
    int age;
    string gender;
    public:
    int get_emp(){
        get_det();
        cout<<"Enter age:";
        cin>>age;
        cin.ignore();
        cout<<"Enter gender:";
        getline(cin,gender);
    }
    int show_emp(){
        show();
        cout<<"Age="<<age<<endl;
        cout<<"Gender="<<gender<<endl;
    }
};
int main(){
    employee emp;
    emp.get_emp();
    emp.show_emp();
}