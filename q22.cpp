#include <iostream>
using namespace std;
class baseNumber    //base class
{
private:
    int num1;

public:
    int num2;
    void setNumber(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    int getNumber()
    {
        return num1;
    }                 // Ye esliye banane ki jarurat padhi kyuki num1 was a private member.
};
class Calculator : baseNumber       // phir ye inheritance ka concept use ho rha hai
{
private:
    int result;

public:
    void calculate(int x, int y)
    {
        setNumber(x, y);

        result = (getNumber() + num2) * num2;
    }
    void showResults()
    {
        cout << "Result : " << result << endl;
    }
};

int main()
{
    Calculator calc;
    calc.calculate(14, 24);
    calc.showResults();

    return 0;
}