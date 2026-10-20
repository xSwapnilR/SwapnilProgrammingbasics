#include <iostream>
using namespace std;
int main() {
   int num=25;
    int* p= &num;
    cout<<"The value of num is "<<*p<<endl;
    cout<<"The address of num is "<<&p<<endl;
    return 0;
    
//p ki value is num ka address

}