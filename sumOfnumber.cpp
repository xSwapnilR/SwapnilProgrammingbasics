#include <iostream>
using namespace std;
int SumofNumbers(int n) {
if (n==1)
{
    return 1;
}
return n + SumofNumbers(n-1);   
}
int main () {
    int n = 9;
    cout<<"The sum of all numbers is "<<SumofNumbers(n)<<endl;
    return 0;
}
