// Write a C++ program to create a class called Car that has private
// member variables for company, model, and year. Implement member
// functions to get and set these variables.
#include<iostream>
using namespace std;
class car{
    private:
    string company,model;
    int year;
    public:
    void get(){
        cout<<"Enter the company name"<<endl;
        cin>>company;
        cout<<"Enter the model name"<<endl;
        cin>>model;
        cout<<"Enter the year"<<endl;
        cin>>year;
    }

        void set(){
            
            cout<<"company name:"<<company<<endl;
            cout<<"model name:"<<model<<endl;
            cout<<"year:"<<year<<endl;
            
            
        }
    
};
    

int main()
{
car c;
c.get();
c.set();
 return 0;
}