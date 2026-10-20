#include <iostream>

class Complex {
    int a, b; // Private data members

public:
    // 1. Default Constructor (0 arguments)
    Complex() {
        a = 0;
        b = 0;
    }

    // 2. Two-Parameter Constructor (2 arguments)
    Complex(int x, int y) {
        a = x;
        b = y;
    }

    // 3. Single-Parameter Constructor (1 argument)
    Complex(int x) {
        a = x;
        b = 0;
    }

    // Helper function to print complex number
    void printNumber() {
        std::cout << "Your number is: " << a << " + " << b << "i" << std::endl;
    }
};

int main() {
    // Constructor 1 call hoga (0 args)
    Complex c1;
    c1.printNumber(); // Output: 0 + 0i

    // Constructor 2 call hoga (2 args)
    Complex c2(4, 6);
    c2.printNumber(); // Output: 4 + 6i

    // Constructor 3 call hoga (1 arg)
    Complex c3(5);
    c3.printNumber(); // Output: 5 + 0i

    return 0;
}