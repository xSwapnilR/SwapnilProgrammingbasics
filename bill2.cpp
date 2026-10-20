#include <iostream>
using namespace std;
int main () {
    int units;
    cout<<"Units used : ";
    cin>>units;
    if (units<=0) {
        cout<<"Rate 5 per unit"<<endl;
    }
else if (units<=100) {
    cout<<"Rate 7 per unit"<<endl;
}
else if (units<=200) {
    cout<<"Rate 10 per unit"<<endl;
}
else {
    cout<<"Rate is 15 per unit"<<endl;
}
return 0;
}