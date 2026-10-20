#include <iostream>
using namespace std;
float gst_rate = 18;
int main () {
    float price;
    cout<< "Enter the base price of product: ";
    cin >> price;
    float quantity;
    cout<< " Enter the quantity of product: ";
    cin>> quantity;
    float total_base = price*quantity;
    cout<< "Total base amount is: "<< total_base<< endl;
    float discount_rate = 10.0;
    float discount_amount = (total_base * discount_rate) / 100.0;
    cout<< "Discount amount is: " << discount_amount << endl;
    float price_after_discount = total_base - discount_amount;
 cout << "price after discount is: " <<price_after_discount<< endl;
    float gst_amount = (price_after_discount * ::gst_rate) / 100.0;
    cout<<"GST amount is: " << gst_amount << endl;
    float final_bill = price_after_discount + gst_amount;
    
cout<< "Your final bill is : " << final_bill<< endl;
cout<<"Thanks for purchasing ";
return 0;
}