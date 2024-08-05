//class
//simple class
#include<iostream>
using namespace std;
class employee{
    public:
    int eid;
    string name;
    public:
    void get_data(){
        cout<<"Enter id:";
        cin>>eid;
        cout<<"Enter name:";
        cin>>name;
    }
    void show(){
        cout<<"Eid="<<eid<<"\n name="<<name<<endl;
      }
    
  };
  int main(){
    employee emp,e2;
    emp.get_data();
    emp.show();
    emp.get_data();
    emp.show();


  }




