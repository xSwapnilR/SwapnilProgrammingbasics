#include <iostream>
using namespace std;
class Person
{
protected:
    int id;

public:
    void setId(int identity)
    {
       id = identity;
    }
    void getId(void)
    {
        cout << "Your Id is: " << id << endl;
    }
};

class Employee : public Person
{
protected:
    float basicPay;

public:
    void setPay(float p)
    { 
        basicPay = p;
    }
};
class Salary : public Employee
{
private:
    float allowance;

public:
    void setAllowance(float a) {
        allowance = a;
    }
    double calculateTotal()
    {
        return basicPay + allowance;
    }
        void display_all()
        {
            getId();
            cout << "Your total bill is " << calculateTotal << endl;
        }
    };
    int main()
    {
        Salary Vishal;
        Vishal.setId(1979);
         Vishal.getId();
         Vishal.setPay(5000);
         Vishal.setAllowance(4300);
         Vishal.display_all();
         return 0;
    }

