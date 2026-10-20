#include <iostream>
using namespace std;

class Test {
    int x = 5;
public:
    void change(int x) {
        x = x + 10;
    }
    void show() {
        cout << x;
    }
};

int main() {
    Test t;
    t.change(20);
    t.show();
    return 0;
}