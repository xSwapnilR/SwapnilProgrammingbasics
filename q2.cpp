#include <iostream>
using namespace std;

void greet(string name = "Rahul") {
    cout << "Hello " << name << endl;
}

int main() {
    greet(); 
    return 0;
}