#include <iostream>
using namespace std;
int analyseNumber(int num);

int main () {
    int num;
    cout<<"Enter the value of n: ";
    cin>>num;
cout<<"The number is ";
analyseNumber(num);
//"Pehle main num variable ki value le chuka hoon. Ab tum niche bane analyseNumber function ke paas jao, is num value ko usme pass karo, aur uske andar ka if-else logic chalao!"
return 0;

}
int analyseNumber(int num) {
    if (num>0 && num%2==0) {
        cout<<"Postive Even Number"<<endl;
    }
    else if (num>0 && num%2!=0) {
        cout<<"Positive Odd Number"<<endl;
    }
    else if (num<0 && num%2==0) {
        cout<<"Negative Even Number"<<endl;
    }
    else if (num<0 && num%2!=0) {
        cout<<"Negative Positive Number"<<endl;
    }
    else {
        cout<<"ZERO"<<endl;
    }
return 0;

}


