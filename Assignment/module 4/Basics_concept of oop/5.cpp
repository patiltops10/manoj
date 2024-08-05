// Define a class to represent a bank account. Include the following member

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string depositorName;
    string accountType;
    int accountNumber;
    double balanceAmount;

public:
    // Member function to assign initial values
    void assignValues() {
        cout << "Enter depositor name: ";
        cin.ignore();
      getline(cin,depositorName);
        cout << "Enter account type: ";
        cin >> accountType;
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter initial balance: ";
        cin >> balanceAmount;
    }

    // Member function to deposit amount
    void deposit() {
        double depositAmount;
        cout << "Enter deposit amount: ";
        cin >> depositAmount;
        balanceAmount += depositAmount;
        cout << "New balance: " << balanceAmount << endl;
    }

    // Member function to withdraw amount
    void withdraw() {
        double withdrawAmount;
        cout << "Enter withdrawal amount: ";
        cin >> withdrawAmount;
        if (withdrawAmount > balanceAmount) {
            cout << "Insufficient balance!" << endl;
        } else {
            balanceAmount -= withdrawAmount;
            cout << "New balance: " << balanceAmount << endl;
        }
    }

    // Member function to display account information
    void displayInfo() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balanceAmount << endl;
    }
};

int main() {
    int choice;
    BankAccount account;

    while (1) {
        cout << endl;
        cout << "Enter 1 to assign initial values." << endl
             << "Enter 2 to deposit amount." << endl
             << "Enter 3 to withdraw amount." << endl
             << "Enter 4 to display account information." << endl
             << "Enter 0 to exit." << endl;
        cout << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.assignValues();
                break;

            case 2:
                account.deposit();
                break;

            case 3:
                account.withdraw();
                break;

            case 4:
                account.displayInfo();
                break;

            case 0:
                cout << "Exited.";
                exit(0);

            default:
                cout << "Enter valid choice." << endl;
                break;
        }
    }

    return 0;
}