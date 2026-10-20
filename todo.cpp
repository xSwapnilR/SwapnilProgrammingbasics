#include <iostream>

using namespace std;
class car {
    public:
string brand;
int price;

car(string b, int p) {
    brand = b;
     price = p;  
}
};

int main () {
    car c1("Thar",1500000);
    cout<<"The brand of the car is "<<c1.brand<< " and its price is "<<c1.price<<endl;
    cout<<"---Thanks---";
    return 0;
}
