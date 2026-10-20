#include <iostream>
using namespace std;
// yaha par abb hame interest rate global variable decalare karna hai pehle toh vo kiya.
float interest_rate = 5.0;
int main() {
   // phir balance wala variable declare kiya 
    float balance;
    cout<< "Enter your balance: ";
    //abb cin ka mtlb yahi hai ki abb user yaha input daalega 
    cin>> balance;

    float interest_rate = 8.5;
    cout<<"Special festival interest rate = 8.5" <<endl;

    float standard_interest = (balance*::interest_rate)/100.0;
float festival_interest = (balance*interest_rate)/100.0;
// abhi upar hamne variable define kiye ki bhai usme solve kya karna hai what formula to use and what to do.
cout<<"Your standard interest is "<< standard_interest<< endl;
cout<<"Your festival interest is "<< festival_interest<< endl;

return 0;
}


