#include <iostream>
using namespace std;
class calculator {
    private:
    int num;
    bool isPositive () {
        if (num>=0)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    public:
    void setNum(int n) {
        num = n;
    }
    void checkandPrint() {
        if (isPositive ())
        {
            cout<<"NUMBER IS POSITIVE"<<endl;
        }
        else {
            cout<<"NUMBER IS NEGATIVE"<<endl;
        }
        
    }

};
int main () {
    calculator c1,c2;
    c1.setNum(10);
    c1.checkandPrint();
    c2.setNum(-89);
    c2.checkandPrint();
    return 0;
}