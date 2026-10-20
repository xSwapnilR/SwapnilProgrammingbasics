#include <iostream>
using namespace std;

void show(int x = 10) {
    cout << "Int: " << x << endl;
}

void show() {
    cout << "Empty" << endl;
}

int main() {
    show();
    return 0;
}