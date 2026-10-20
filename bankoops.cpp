#include <iostream>
using namespace std;
class Bankaccount {
    private:
    int balance = 0;
    
    public:
    void deposit(int a) {
            balance += a;
    }
    void getBalance() {
cout<<"The amount in bank is "<<balance<<endl;
    }
};
int main () {
    Bankaccount b1;
    b1.deposit(200000);
    b1.getBalance();
    return 0;
}