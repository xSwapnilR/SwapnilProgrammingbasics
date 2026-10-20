#include <iostream>
using namespace std;

class Bank {
private:
    int balance;

    // Private member function for Nesting
    bool checkBalance(int amount) {
        if (balance >= amount) {
            return true;
        } else {
            return false;
        }
    }

public:
    // 1. Initial Balance set karne ke liye
    void intitbalance(int initial) {
        balance = initial;
    }

    // 2. Withdraw function (Semicolon hata kar body banayi hai)
    void withdraw(int amount) {
        // NESTING: Private checkBalance() ko `if` condition mein call kiya
        if (checkBalance(amount)) {
            balance = balance - amount;
            cout << "Transaction Successful! Remaining balance: " << balance << endl;
        } else {
            cout << "Transaction Unsuccessful!! Insufficient Balance" << endl;
        }
    }
};

int main() {
    Bank b1;

    // Initial balance set kiya
    b1.intitbalance(300000);

    // Test Case 1: Valid amount withdraw karke check karo
    b1.withdraw(40000);

    // Test Case 2: Insufficient balance check karne ke liye
    b1.withdraw(350000);

    return 0;
}