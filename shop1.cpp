#include <iostream>
using namespace std;
int main() {
    float price;
    int quantity;

    // User har bar different values put karega 
    cout<< "Enter the price:";
    cin>> price;
    
    cout<< "Enter the quantity:";
    cin>> quantity;

    float total = quantity*price;
    cout<< " Total Bill:" << total <<  endl;
 return 0;
}