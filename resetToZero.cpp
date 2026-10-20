#include <iostream>
using namespace std;
void resettoZero(int *p) {
    *p = 0;
}
int main () {
    int num = 45;
    resettoZero(&num);
    cout<<"The number 45 is been changed to "<<num<<endl;
    return 0;
}