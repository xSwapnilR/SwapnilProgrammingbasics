#include <iostream>
using namespace std;
class Bank
{
private:
    string Holder;
    int accId;
    double balance;

public:
    Bank()
    {
        Holder = "guest";
        accId = 0;
        balance = 0.0;
    }
    Bank(string n, int id, double bal)
    {
        Holder = n;
        accId = id;
        balance = bal;
        cout << "This was a parameterised contructor" << endl;
    }
    void display()
    {
        cout << "Holder: "
             << Holder << "\naccount id: "
             << accId << "\nBalance: " << balance << endl;
    }
};

int main()
{
    Bank b1;
    b1.display();
    Bank b2("Rahul", 99112, 300);

    b2.display();
    return 0;
}