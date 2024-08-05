// // //simple_class

// // #include<iostream>
// // using namespace std;
// // class employee{
// //     public:  //access specifier
// //     int eid;  //eid,name =>data member
// //     string name;
// //     public:
// //     void get_data(){
// //         cout<<"Enter id:";
// //         cin>>eid;
// //         cout<<"Enter name:";
// //         cin>>name;
// //     }
// //     void show(){   //member function
// //         cout<<"Eid="<<eid<<"\n Name="<<name<<endl;
// //     }
// // };

// // int main(){
// //     employee emp,e2; //emp is my object
// //     emp.get_data();
// //     emp.show(); // object.member_function_name() => dot(.) is member access operator.
// //     e2.get_data();
// //     e2.show();
// // }
// #include<iostream>
// using namespace std;
// class employee{
//     public:
//     int eid;
//     string name;
// public:
// void get_data(){
//     cout<<"Enter id:";
//     cin>>eid;
//     cout<<"Enter name:";
//     cin>>name;
// }
// void show(){
//   cout<<"Eid="<<eid<<"\n Name="<<name<<endl;
  
// }

// };
// int main(){
//  employee emp,e2;
// emp.get_data();
// emp.show();
// e2.get_data();
// e2.show();
// }
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
    cout<<"Eid="<<eid<<"\n Name="<<name<<endl;
}
};
int main(){
    employee emp,e2;
    emp.get_data();
    emp.show();
    e2.get_data();
    e2.show();
}