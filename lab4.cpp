#include <iostream>
#include <string>

class BankEmployee {
private:
    std::string employeeName;
    int accountNumber;
    double balance;

public:
    // Member function to set initial values
    void setInitialValues() {
        std::cout << "Enter employee name: ";
        std::getline(std::cin, employeeName);

        std::cout << "Enter account number: ";
        std::cin >> accountNumber;

        // Assuming initial balance is 0
        balance = 0;
    }

    // Member function to print employee details and balance status
    void printDetails() const {
        std::cout << "\nEmployee Details:\n";
        std::cout << "Name: " << employeeName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;

        // Check for invalid balance
        if (balance < 500) {
            std::cout << "Invalid Balance: Balance is less than 500!\n";
        }
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful. Updated balance: " << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance.\n";
        }
    }

    // Member function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit successful. Updated balance: " << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount.\n";
        }
    }
};

int main() {
    // Create an instance of the BankEmployee class
    BankEmployee employee;

    // Set initial values
    employee.setInitialValues();

    // Display initial details
    employee.printDetails();

    // Withdraw and deposit examples
    employee.withdraw(200);
    employee.deposit(1000);

    // Display updated details
    employee.printDetails();

    return 0;
}
