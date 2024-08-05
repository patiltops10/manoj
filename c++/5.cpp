// write in c++ Define a class to represent a bank account. Include the following members:
// 3. Data Member:
// -Name of the depositor
// -Account Number
// -Type of Account
// -Balance amount in the account

// Member Functions
// -To assign values
// -To deposited an amount
// -To withdraw an amount after checking balance
// -To display name and balance.

#include<iostream>
using namespace std;
class bank_account{
    public:
    string depositor_name,account_type;
    int account_number,balance_amount,deposit_amount,withdrawl_amount;
    
    public:

void  assign_values(){
    cout<<"depositor_name:";
    cin >> depositor_name;
    cout<<"account_type:";
    cin>>account_type;
    cout<<"account_number:";
    cin>>account_number;
    cout<<"balance:";
    cin>>balance_amount;


}
void deposit() {
        
        cout<<"Enter deposit_amount:";
        cin>>deposit_amount;
        balance_amount += deposit_amount;
        cout<<"result="<<balance_amount<<endl;
    } 


void withdrawl(){
cout<<"withdrawl_amount:";
cin>>withdrawl_amount;
balance_amount-=withdrawl_amount;
cout<<"result="<<balance_amount<<endl;
}

void display_name() {
        cout << "Depositor Name: " << depositor_name << endl;
        cout << "Balance: " << balance_amount << endl;
    }

};


int main(){
    int ch;
    bank_account b;
    while(1){
    //     cout << endl;
    // cout << "Enter 1 for display information. " << endl 
    //      << "Enter 2 for deposit. " << endl
    //      << "Enter 3 for withdraw. " << endl
    //      << "Enter 0 for exit. " << endl;
    // cout << endl;

    cout <<"Enter your choice: ";
    cin >> ch;

  cout<<"Enter choice";
  cin>>ch;
    switch (ch){
        case 1: b.assign_values();

            break;

        case 2: b.deposit();
            break;
        
        case 3: b.withdrawl();
            break;

        case 4: b.display_name();
            break;
        
        case 0: cout << "Exited.";
            exit (0); 
        
        default: cout << "Enter valid choice." << endl;
            break;
    }
}
}