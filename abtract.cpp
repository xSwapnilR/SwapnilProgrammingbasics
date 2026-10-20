#include <iostream>
using namespace std;

class BankAccount {
    private:
    string accountnumber;
    double balance;

    public:
    BankAccount(string accNum, double intialBalance) {
        accountnumber = accNum;
        balance = intialBalance;

    }
    double getBalance() const {
        return balance;
    }
    void deposit(double amount) {
        if (amount>0) {
balance += amount;
cout<<"Deposited: "<<amount<<endl;
        }
        else {
            cout<<"Invalid deposit amount"<<endl;
        }
    }

    void withdraw (double amount) {
        if (amount>0 && amount<=balance) {
            balance -=amount;
        }
        else {
            cout<<"Invalid withdraw"<<endl;
        }
    }
};
int main () {
    BankAccount myAccount("122998282",500);
    myAccount.deposit(200);
    myAccount.withdraw(100);

    cout<<"Current Balance: "<<myAccount.getBalance()<<endl;

    return 0;
}