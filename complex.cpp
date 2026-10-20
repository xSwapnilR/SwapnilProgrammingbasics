#include <iostream>
using namespace std;

class Complex {
private:
    int a, b; // Private data members

public:
    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    // Friend Function Declaration (Special Permission di   )
    friend void printNumber(Complex c); 
};

// Class ke bahar Definition (No 'friend' keyword, No 'Complex::')
void printNumber(Complex c) {
    // Private variables 'a' aur 'b' ko direct access kar raha hai!
    cout << "Your complex number is: " << c.a << " + " << c.b << "i" << endl;
}

int main() {
    Complex c1;
    c1.setNumber(3, 4);

    // Direct function call (No c1.printNumber())
    printNumber(c1); 

    return 1;
}