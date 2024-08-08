// Define a class to represent a bank account. Include the following membe
#include <iostream>
#include <string>
#include <limits> // For std::numeric_limits

class BankAccount {
private:
    std::string depositorName;
    std::string accountType;
    int accountNumber;
    double balanceAmount;

public:
    // Member function to assign initial values
    void assignValues() {
        std::cout << "Enter depositor name: ";
        std::cin.ignore(); // To clear the newline character left by previous input
        std::getline(std::cin, depositorName);

        std::cout << "Enter account type: ";
        std::cin >> accountType;

        std::cout << "Enter account number: ";
        while (!(std::cin >> accountNumber)) {
            std::cin.clear(); // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Enter a valid account number: ";
        }

        std::cout << "Enter initial balance: ";
        while (!(std::cin >> balanceAmount) || balanceAmount < 0) {
            std::cin.clear(); // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Enter a valid initial balance: ";
        }
    }

    // Member function to deposit amount
    void deposit() {
        double depositAmount;
        std::cout << "Enter deposit amount: ";
        while (!(std::cin >> depositAmount) || depositAmount < 0) {
            std::cin.clear(); // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Enter a valid deposit amount: ";
        }
        balanceAmount += depositAmount;
        std::cout << "New balance: " << balanceAmount << std::endl;
    }

    // Member function to withdraw amount
    void withdraw() {
        double withdrawAmount;
        std::cout << "Enter withdrawal amount: ";
        while (!(std::cin >> withdrawAmount) || withdrawAmount < 0) {
            std::cin.clear(); // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Enter a valid withdrawal amount: ";
        }
        if (withdrawAmount > balanceAmount) {
            std::cout << "Insufficient balance!" << std::endl;
        } else {
            balanceAmount -= withdrawAmount;
            std::cout << "New balance: " << balanceAmount << std::endl;
        }
    }

    // Member function to display account information
    void displayInfo() const {
        std::cout << "Depositor Name: " << depositorName << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balanceAmount << std::endl;
    }
};

int main() {
    int choice;
    BankAccount account;

    while (true) {
        std::cout << std::endl;
        std::cout << "Enter 1 to assign initial values." << std::endl
                  << "Enter 2 to deposit amount." << std::endl
                  << "Enter 3 to withdraw amount." << std::endl
                  << "Enter 4 to display account information." << std::endl
                  << "Enter 0 to exit." << std::endl;
        std::cout << std::endl;

        std::cout << "Enter your choice: ";
        while (!(std::cin >> choice)) {
            std::cin.clear(); // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Enter a valid choice: ";
        }

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
                std::cout << "Exited." << std::endl;
                return 0;
            default:
                std::cout << "Enter a valid choice." << std::endl;
                break;
        }
    }
}
