#include <iostream>
#include <string>
using namespace std;
class rectangle {
    private:
    int length;
    int breadth;
    public:
    rectangle () {};
    rectangle (int l, int b) {
        length = l;
        breadth = b;

    }
    
    void calculateArea() {
        int calculateArea = length*breadth;
        cout<<"The area of rectangle is "<<calculateArea<<endl;

    }

};
int main () {
    rectangle r1 (8,10);
    rectangle r2 (5,6);
    r1.calculateArea();
    r2.calculateArea();
    return 0;
}

