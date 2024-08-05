//4.Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
using namespace std;

class student_info{

    protected:
    int sid, std;
    string name;
    char div; 

    public:
    void input_info(){
    cout<<"Enter student id:";
    cin>>sid;
    cout<<"Enter student name:";
    cin>>name;
    cout<<"Enter student division:";
    cin>>div;
    cout<<"Enter student standard:";
    cin>>std;

    }

    void display_info(){
    cout << "\nStudent id: " << sid << endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Division:"<<div<<endl;
    cout<<"standard:"<<std<<endl;
}
};

class marks{

    protected:
    int math,science,physics;

    public:
    void input_marks(){
        cout<<"math:";
        cin>>math;
        cout<<"science:";
        cin>>science;
        cout<<"physics:";
        cin>>physics;

         } 

    void display_marks(){
cout << "\nObtained marks: " << endl;
cout<<"Math:"<<math<<endl;
cout<<"Science:"<<science<<endl;
cout<<"Physics:"<<physics<<endl;
}
};

class marksheet : protected student_info, protected marks{

    public:
    void input(){
        cout << "\nEnter Student information: " << endl;
        input_info();

        cout << "\nEnter marks: " << endl;
        input_marks();
    
    }

    float percentage(){

        return ( (math,science,physics) * 100.0 ) / 300.0;
    }

    void display(){
        cout << "\nStudent Marksheet: " << endl;
        display_info();
        display_marks();

        cout << "\nTotal Marks is: " << math+science+physics << endl;
        cout << "Percentage is: " << percentage() << "%" << endl << endl;
    
        
    }
};

int main(){

marksheet ms;

    ms.input();
    
    ms.display();

    return 0;
}