// Write a C++ program to implement a class called Bank Account that has
// private member variables for account number and balance. Include
// member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;

class BankAccount {
private:
    float balance;
    int accountNumber;

public:
    BankAccount() {
        balance = 1000.0;
        accountNumber = 254622; // Removed quotes, as accountNumber is an integer
    }

    void show() {
        cout << "Account number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit() {
        cout << "Enter the amount to deposit: " << endl;
        float amount;
        cin >> amount;
        balance += amount;
        cout << "Deposit successful" << endl;
    }

    void withdraw() {
        cout << "Enter the amount to withdraw: " << endl;
        float amount;
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful" << endl;
        } else {
            cout << "Sorry, your balance is low" << endl;
        }
    }
};

int main() {
    BankAccount b;
    int choice;
    do {
        cout << "1. Check balance" << endl;
        cout << "2. Deposit amount" << endl;
        cout << "3. Withdraw amount" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                b.show();
                break;
            case 2:
                b.deposit();
                break;
            case 3:
                b.withdraw();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Enter the right option" << endl;
        }
    } while (choice != 4);

    return 0;
}