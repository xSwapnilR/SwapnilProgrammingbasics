#include <iostream>
#include <string>
using namespace std; 
class car {
    public: 
    string brand;
    int  price ;
//parametrized contructor....
    car (string b, int p) {
        brand = b;
        price = p;
    }
};
int main () {
    car c1("Thar", 2500000);
    car c2("Scorpio", 3700000);
    cout<<"The price of car is "<<c1.price<<" and the car is "<<c1.brand<<endl;
        cout<<"\nThe price of car is "<<c2.price<<" and the car is "<<c2.brand<<endl;

    return 0;
}