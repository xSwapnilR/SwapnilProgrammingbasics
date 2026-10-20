#include <iostream>
using namespace std;

    class Rectangle {
      private :
    double length ; 
    double breadth ;
    public:
    Rectangle(double l = 1.0, double b = 1.0) {
        length = l;
        breadth = b;
    }
    double calculateArea() {
        return length * breadth;
    }
   
    };
    int main () {
       
       Rectangle r1(1,2);  
       Rectangle r2(30,5);
       Rectangle r3(4.0, 3.0);

       cout << r1.calculateArea() << endl;
         cout << r2.calculateArea() << endl;
         cout << r3.calculateArea() << endl;
        return 0;
    }

    
