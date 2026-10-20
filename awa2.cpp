#include <iostream>
using namespace std;
int main () {
    int num;
    int arm = 0, r;
    cout << "Enter the number: " << endl;
    cin >> num;
    int temp = num;
    while (num != 0){
        r = num%10;
        arm = arm + r*r*r;
        num = num /10;
    }
    cout<<"The arm value of num is "<<arm<<endl;
    if (arm == temp){
        cout<<"It is a armstrong value."<<endl;
    } else {
        cout<<"It is not a  armstrong value."<<endl;
    }
    return 0;
}