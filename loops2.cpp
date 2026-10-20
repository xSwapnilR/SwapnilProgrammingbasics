

#include <iostream>
using namespace std;
int main () {
    int n;
    int sum = 0;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        sum = sum + i;
        /* code */
    }
    cout<< " The sum of n values is "<<sum<<endl;

    return 0;
}
