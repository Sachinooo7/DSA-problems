// Create a Java program to implement a basic banking system with the following features:
// - Account creation (Name, Account Number, Balance).
// - Deposit and withdrawal operations.
// - Prevent overdraft by checking the balance before withdrawal.
// - Demonstrate encapsulation using private variables and public getter and setter methods.

// Input Example:
// Create Account:
// Name: John Doe
// Account Number: 12345
// Initial Balance: 1000
// Deposit: 500
// Withdraw: 2000

// Output Example:
// Deposit successful! Current Balance: 1500
// Error: Insufficient funds. Current Balance: 1500


#include <bits/stdc++.h>
using namespace std;

class Bank {
private:
    string name;
    int accountNumber;
    double balance;

public:
    Bank(string n, int accNo, double inBalance) {
        name = n;
        accountNumber = accNo;
        balance = inBalance;
    }

    string getName() {
        return name;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
            balance += amount;
            cout << "Deposit successful! Current Balance: " << balance << endl;
        
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! Current Balance: " << balance << endl;
        } else if (amount > balance) {
            cout << "Error: Insufficient funds. Current Balance: " << balance << endl;
        } else {
            cout << "Error: Withdrawal amount must be positive." << endl;
        }
    }
};

int main() {
    vector<Bank> accounts;
    int choice;

    while (true) {
        cout << "1. Create Account\n2. Deposit\n3. Withdraw\n4. Exit\nChoose an option: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            int accountNumber;
            double initialBalance;
            cout << "Name: ";
            cin >> name;
            cout << "Account Number: ";
            cin >> accountNumber;
            cout << "Initial Balance: ";
            cin >> initialBalance;
            accounts.push_back(Bank(name, accountNumber, initialBalance));
            cout << "Account created successfully.\n";
        } else if (choice == 2) {
            int accNo;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            bool found = false;

            for (auto acc : accounts) {
                if (acc.getAccountNumber() == accNo) {
                    acc.deposit(amount);
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Error: Account not found.\n";
            }
        } else if (choice == 3) {
            int accNo;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Withdrawal Amount: ";
            cin >> amount;
            bool found = false;

            for (auto acc : accounts) {
                if (acc.getAccountNumber() == accNo) {
                    acc.withdraw(amount);
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Error: Account not found.\n";
            }
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid option. Try again.\n";
        }
    }

    return 0;
}
