#include <iostream>
using namespace std;
class employee {
    int id; //kyuki sabki alag alag id hogi toh private variable mai banaya
    static int count;

    public:
    void setData () {
        cout<<"Enter the id: "<<endl;
        cin>>id;
        count++;
    }
    void getData () {
        cout<<"The id of the employee is "<<id<<" and this employee number is "<<count<<endl;

    }
    static void getCount(void) {
        cout<<"The value of the count is "<<count<<endl;
    }
};
// IMPORTANT: Static variable ko class ke bahar define karna zaroori hai
int employee::count;// By default iski initial value 0 hoti hai

int main () {
    employee rohan,harry;
     harry.setData();
     harry.getCount();
     employee::getData;

     rohan.setData();
     rohan.getCount();
     employee::getData;
return 0;
    }