#include <iostream>
using namespace std;
int main() {
int amount;
    cout<<"Amount to be withdrawl: ";
cin>>amount;
int balance;
cout<<"Balance: ";
cin>>balance;

if (amount>0 && amount<=balance) {
    cout<<"Transaction is succesfull"<<endl;

}
else if (amount>balance) {
    cout<<"Transaction failed \nTry again"<<endl;
}
return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     double balance = 10000;
//     double amount;

//     cout << "Enter withdrawal amount: ";
//     cin >> amount;

//     // Outer IF starts here
//     if (amount > 0 && amount <= balance) {
        
//         // Inner IF starts here
//         if ((int)amount % 100 == 0) {
//             balance = balance - amount;
//             cout << "Transaction Successful!" << endl;
//             cout << "Remaining Balance: Rs " << balance << endl;
//         } 
//         else {
//             cout << "Error: Amount must be in multiples of 100!" << endl;
//         } 
//         // Inner IF-ELSE ends here

//     } // <--- Outer IF yahan band (close) hoga!
//     else {
//         cout << "Error: Insufficient Balance or Invalid Amount!" << endl;
//     } // <--- Outer ELSE yahan band hoga!

//     return 0;
// } // <--- main() function yahan band hoga