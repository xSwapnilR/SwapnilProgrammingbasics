#include <iostream>
using namespace std;
int d = 43;
int main () {
    int a , b, c;
    cout << " Enter the value of a:";
    cin>> a ;
    cout << " Enter the value of b:";
    cin>> b ;
    c = a + b;
    cout << "The sum is " <<c<< endl;
    cout << "The global d is " <<::d;
    return 0;
}