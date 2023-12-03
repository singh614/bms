#include<iostream>
using namespace std;

class Account {
    string name;
    string password;
    
    double balance;

    public: 
    double getBalance() {};
    void deposit(double amount) {
        cout << "Deposit of INR " << amount << " is successfull\n";
    };
    void withdraw(double amount) {
        cout << "Withdrawl of INR " << amount << " is successfull\n";
    };
    void openAccount(double amount) {
        cout << "Account Opening with deposit INR " << amount << " is successfull\n";
    };
    
};

int main() {
    Account ac1;
    
    int choice;
    double amount;
    string user_id, user_pwd;
    
    return 0;
}
