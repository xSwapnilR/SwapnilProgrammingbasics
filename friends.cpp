#include <iostream>
using namespace std;
class Box {
private:
int length;

public:
void setlength(int l) {
length = l;
}

friend void printLength(Box b);
};

void printLength(Box b) {   
cout<<"The length of the box is "<< b.length <<endl; 
}

int main () {
    Box b1;
    b1.setlength(15);
    printLength(b1);

    return 0;

}