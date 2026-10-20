#include <iostream>
using namespace std;

union Payment {
    int upiID;
    double cardNO;

};
int main() {
    Payment p;
    p.upiID = 9876;
    p.cardNO = 12345689;

    cout<<"UPI ID: "<<p.upiID<<"\nCARD NO: "<<p.cardNO<<endl;
    return 0;
}