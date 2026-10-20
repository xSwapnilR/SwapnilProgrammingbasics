#include <iostream>
using namespace std;
int findMin (int a,int b, int c);
int main () {
    int num1 , num2 , num3 ;
    cout<<"Enter the value of num1: ";
    cin>>num1;
    cout<<"Enter the value of num2: ";
    cin>>num2;
    cout<<"Enter the value of num3: ";
    cin>>num3;
cout << "Minimum number is: " << findMin(num1, num2, num3) << endl;
    return 0;
    
}
int findMin(int a, int b, int c) {
    if (a<=b && a<=c) {
        return a;
    } 
    else if (b<=a && b<=c) {
        return b;
    }
    else
    {
        return c;
    }
    
    
}