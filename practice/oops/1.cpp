#include<iostream>
using namespace std;
class person:
{
    private:
    int run;
    string msg;
    public:
    void play(){
        run=50;
        cout<<"today i scored"<<run<<"runs"<<endl;
    }
    void walk(){
        msg="Today i walk 3 kilometer";
        cout<<msg;
    }

};
int main(){
person obj;
obj.play();
obj.walk();
}