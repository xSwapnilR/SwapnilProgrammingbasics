#include <iostream>
using namespace std;
void makeDouble(int *p) {
    *p = *p * 2;
}
int main () {
    int num = 15;
    makeDouble(&num);
    cout<<"The double of the value is "<<num<<endl;
    return 0;
}