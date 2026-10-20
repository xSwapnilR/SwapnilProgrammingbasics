#include <iostream>
using namespace std;
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

}

 int main () {
    int x = 10, y = 20;
    swap (&x, &y) ; 
    cout<< " The value of x is "<<x<< " and y is " <<y<<endl;
    return 0;
 }
