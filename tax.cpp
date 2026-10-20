#include  <iostream>
using namespace std;

float Global_tax_rate=18.0;
int main () { 
    
    float price;
    cout<<"The price is ";
    cin>> price;
    float tax_rate=10.0;
        float tax_value = price * tax_rate;
    
    cout << "tax_value is " <<tax_value <<endl;
    cout << "Global_tax_rate is " <<::Global_tax_rate;
    return 0;
}





