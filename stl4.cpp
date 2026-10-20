#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    vector <int>v;
    cout<<"Enter "<<n<<" elements"<<endl;
    for (int i = 0; i<n; i++) {
        int val;
        cin>>val;
        v.push_back(val);
    }
int minVal = v[0];
    for (int i = 0; i <v.size() ; i++) {
        if (minVal > v[i]) {
            minVal = v[i];
        }
    }
    cout<<"Minimum value is "<<minVal<<endl;
    return 0;
}