//palindrome number
#include<iostream>
using namespace std;
int main(){
    int num,rev=0,rem=0;
    cout<<"Enter number:";
    cin>>num;
    int n=num;
    do{
rem=num%10;
rev=rev*10+rem;
    }while(num!=0);
cout<<"reverse = "<<rev<<endl;

if(n==rev){
    cout<<"number is palindrome.";
}
else{
    cout<<"number is not palindrome.";

}

}