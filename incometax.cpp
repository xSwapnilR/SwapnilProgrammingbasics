#include <iostream>
using namespace std;
class Account;
class TaxInspector {
    public:
    void verifyTax(Account acc);
    void issueNotice(Account acc);
};
class Account {
    private : 
    int balance =  20000000;

    public:
    friend void TaxInspector :: verifyTax(Account acc);
    
};

void TaxInspector :: verifyTax(Account acc) {
    cout<<"Tax auddit passed. Checked Balance: Rs "<<acc.balance<<endl;

}
void TaxInspector :: issueNotice(Account acc) {
    cout<<"Notice Issued to the account holder! "<<endl;
}

int main () {
    Account myAcc;
    TaxInspector officer;

    officer.verifyTax(myAcc);
    officer.issueNotice(myAcc);
    return 0;

}