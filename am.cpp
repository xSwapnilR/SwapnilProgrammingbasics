#include <iostream>
using namespace std;

// Base Class 1
class A {
protected:
    int a;
public:
    void input() {
        cout << "Enter value for A: ";
        cin >> a;
    }
    void display() {
        cout << "Value of A = " << a << endl;
    }
};

// Base Class 2
class B {
protected:
    int b;
public:
    void input() { // Same function name as Class A
        cout << "Enter value for B: ";
        cin >> b;
    }
    void show() {
        cout << "Value of B = " << b << endl;
    }
};

// Derived Class inheriting from Class A and Class B (Multiple Inheritance)
class C : public A, public B {
private:
    int c;
public:
    // Ambiguity Resolution: C ke getData() function me Scope Resolution (::) ka use
    void getData() {
        cout << "Enter value for C: ";
        cin >> c;

        // Explicitly calling Base Class functions to resolve ambiguity
        A::input(); 
        B::input(); 
    }

    void showData() {
        display(); // Class A ka function
        show();    // Class B ka function
        cout << "Value of C = " << c << endl;
    }
};

int main() {
    C obj;

    // Ambiguity ko resolve karte hue complete data input aur display
    obj.getData();
    cout << "\n--- Displaying Values ---" << endl;
    obj.showData();

    return 0;
}