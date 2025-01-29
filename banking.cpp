#include <iostream>
using namespace std;

class BankAccount {
private:
    string owner;
    string password;
    double balance;

public:
    BankAccount(string owner_name, string pass, double initial_balance) {
        owner = owner_name;
        password = pass;
        balance = (initial_balance >= 0) ? initial_balance : 0;
    }

    bool login(string entered_password) {
        return entered_password == password;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful! New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! New balance: $" << balance << endl;
        } else {
            cout << "Invalid or insufficient funds." << endl;
        }
    }

    void checkBalance() const {
        cout << owner << "'s account balance: $" << balance << endl;
    }
};

int main() {
    string name, password, entered_password;
    double initial_deposit;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Set your password: ";
    cin >> password;
    cout << "Enter initial deposit amount: ";
    cin >> initial_deposit;

    BankAccount account(name, password, initial_deposit);

    int attempts = 0;
    bool authenticated = false;
    while (attempts < 3) {
        cout << "\nLogin required. Enter your password: ";
        cin >> entered_password;
        
        if (account.login(entered_password)) {
            authenticated = true;
            break;
        } else {
            cout << "Incorrect password. Try again." << endl;
            attempts++;
        }
    }
    
    if (!authenticated) {
        cout << "Too many failed attempts. Exiting..." << endl;
        return 0;
    }
    
    int choice;
    double amount;
    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nChoose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.checkBalance();
                break;
            case 4:
                cout << "Thank you for using our banking system!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}