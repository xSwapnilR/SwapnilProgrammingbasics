#include <iostream>
using namespace std;
class ATM {
    private:
    int balance = 10000;
    public:
    void withdrawMoney(int amount) {
        if (amount<=balance)
        {
            balance = balance - amount;
                cout<<"Withdrawn Succesfull! Remaining balance: "<<balance<<endl;
        }
        else
        cout<<"Insufficient amount !!"<<endl;
    }
};
int main () {
    ATM myATM;
    myATM.withdrawMoney(2000);
    return 0;
}