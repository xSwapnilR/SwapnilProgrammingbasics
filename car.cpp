#include <iostream>
using namespace std;
class car {
private:
string carName;
int carNo;
public:
car () {} 
car (string n, int c);
car (string n, double c);
void show();

};
car :: car(string n, int c) {
    carName = n;
    carNo = c;
}
car :: car(string n, double c) {
    carName = n;
    carNo = c;
}
void car :: show() {
    cout<<"The name of car is "<<carName<< "and its number is "<< carNo <<endl; 
}

int main() {
    car x1, x2;      // OBJECTS (x1, x2) banaye
    string n1, n2;   // Names
    int p1;          // Int Price/Number
    double p2;       // Double Price/Number

    // Car 1 Input
    cout << "Enter Car 1 name and number (int): ";
    cin >> n1 >> p1;            // Dono values input lo!
    x1 = car(n1, p1);           // OBJECT x1 mein store karo
    x1.show();

    // Car 2 Input
    cout << "Enter Car 2 name and number (double): ";
    cin >> n2 >> p2;            // Dono values input lo!
    x2 = car(n2, p2);           // OBJECT x2 mein store karo
    x2.show();

    return 0;
}

