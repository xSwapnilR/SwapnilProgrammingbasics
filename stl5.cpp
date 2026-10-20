#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n;
    cout <<"Enter the size : "<<endl;
    cin>>n;
    vector<int>v;
cout<<"Enter"<<n<<"elements"<<endl;
for (int i = 0; i < n; i++) {
    int val;
    cin>>val;
    v.push_back(val);
}
int count = 0;
for (int i =0; i < n; i++) {
    if (v[i]%2==0) {
        count++;
    }
}
cout<<"count of even number is : " <<count<<endl;
return 0;
}