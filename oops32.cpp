#include <iostream>
#include <string>
using namespace std;
class Simple {
    private :
    int data1;
    int data2;
    public :
    Simple(int a , int b = 9) {
        data1 = a;
        data2 = b;
       
    }
    void display() {
         cout<<"The value of a is "<<data1<<" and b is "<<data2<<endl;
    }

};
int main () {
    Simple s1(1,4);
    s1.display();

    Simple s2(3);
    s2.display();

    return 0;
}