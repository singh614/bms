#include<iostream>
using namespace std;

class Account {
    string name;
    string password;
    
    double balance;

    public: 
    double getBalance() {
        return balance;
    };
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of INR " << amount << " is successfull\n";
    };
    void withdraw(double amount) {
        balance -= amount;
        cout << "Withdrawl of INR " << amount << " is successfull\n";
    };
    void openAccount(double amount) {
        cout << "Enter your Name: ";
        cin >> this->name;
        balance = amount;

        cout << "Account Opening with deposit INR " << amount << " is successfull\n";
    };
    
};

int main() {
    Account ac1;
    
    int choice;
    double amount;
    string user_id, user_pwd;

    cout << "Program Compiled Successfully" << endl;
    
    return 0;
}
