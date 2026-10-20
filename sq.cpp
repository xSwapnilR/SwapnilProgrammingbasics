#include <iostream>
using namespace std;
void makeSquare(int *p) {
    *p = (*p) * (*p) ;
}

int main () {
   int num = 6;
    makeSquare(&num);
    
    cout<<" The sqaure of 6 is  "<<num<<endl;
    return 0;
}