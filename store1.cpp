#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    
    cout<<"1. PIZZA(Rs 250/-): "<<endl;
    cout<<"2. BURGER(Rs 120/-): "<<endl;
    cout<<"3. PASTA(Rs180/-): "<<endl;
    int choice;
    cout<<"Enter the choice(1,2,3): ";
    cin>>choice;
    double quantity, total, final;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    cout<<fixed<<setprecision(2);
    switch(choice)
    {
    case 1:
    total=quantity*250.0;
    break;
case 2:
total=quantity*120.0;
break;
case 3:
total=quantity*180.0;
break;
    default:
    cout<<"Invalid!!"<<endl;
    return 0;
    }
    if (total>500) {
        cout<<"\nCongratulations! You got a 20% discount for spending above Rs. 500."<<endl;
        final=total-(total*0.20);
    
    }
    else if (total>400) {
        cout<<"\nCongratulations! You got a 10% discount for spending above Rs. 400."<<endl;
        final=total-(total*0.10);
    }
    else 
    final=total;

    cout<<setw(5)<<"Total Bill: "<<total<<endl;
    cout<<setw(5)<<"Final Bill: "<<final<<endl;
    return 0;
}