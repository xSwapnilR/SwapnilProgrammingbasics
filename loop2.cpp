#include <iostream>
using namespace std;
int main () {
    int n;
    long long fac = 1;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i=1; i <= n; i++)
    {
        fac = fac*i;
    }
    cout << "Factorial = " << fac << endl;
    return 0;

}
