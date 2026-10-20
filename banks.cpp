#include <iostream>
using namespace std;
class Bank {
    private:
    int balance;
    bool checkBalance(int amount) {
        if (balance>=amount)
        {
            return true;
        }
        else {
        return false;
        }   
    }
    public:
    void intitbalance (int initial);
    void withdraw (int amount) {    
    if (checkBalance(amount))
    {
        balance = balance - amount;
       cout<<"Trasaction Successful remaining amount is "<<balance<<endl;
       
    }

    else {
        cout<<"Transaction Unsuccessful!!   Insufficient Balance "<<endl;
    }
    
    }
};
int main () {
    Bank b1;
    b1.intitbalance(30000);
    b1.withdraw(4000);
    return 0;
}