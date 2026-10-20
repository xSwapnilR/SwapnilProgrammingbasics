#include <iostream>
using namespace std;
int main () {
    float price;
    int quantity;
    // Yeh mai ek aur question just for practice kar rha hai hu
    cout<< " Enter the price:";
    cin>> price;
    cout<< "Enter the quantity:";
    cin>> quantity;
    float total = quantity*price;
    cout<< "The total price is: " << total;
    cout<< "\n Thank you for using this program.";
    return 0;
}