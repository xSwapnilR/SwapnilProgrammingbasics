#include <iostream>
#include <iomanip>
using namespace std;
int main() {
   
    int choice;
    double quantity, total_bill=0.0, final_bill=0.0;

    cout << "--- GROCERY STORE MENU ---" << endl;
    cout << "1. Apple (Rs. 100/kg)" << endl;
    cout << "2. Mango (Rs. 150/kg)" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    cout << "Enter quantity in kg: ";
    cin >> quantity;

    cout<< fixed<< setprecision(2);
    switch (choice)
{
    case 1:
    total_bill = quantity*100.0;
    break;

    case 2:
    total_bill = quantity*150.0;
    break;

    default:
    cout<<"Invalid Item Choice!"<<endl;
    return 0;
}

if (total_bill > 500) {
    cout<<"\nCongratulations! You got a 10% discount for shopping above Rs. 500."<<endl;
    final_bill = total_bill - (total_bill*0.10);

}
else 
    final_bill = total_bill;


cout << "----------------------------" << endl;
cout<< setw(15)<<"Total Bill"<<"Rs. "<<total_bill<<endl;
cout<< setw(15)<<"FInal Bill"<<"Rs. "<<final_bill<<endl;
cout << "----------------------------" << endl;
return 0;
}
