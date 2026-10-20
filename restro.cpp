#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int burger; 
    cout<<"Enter the quantity of burgers: ";
cin>>burger;

int pizza;
cout<<"Enter the quantity of pizzas: ";
cin>>pizza;

double total_burger=burger*89.5;
double total_pizza=pizza*101.4;
double Bill=total_burger + total_pizza;

cout << fixed << setprecision(2);
cout<<"Burger total: "<<setw(10)<<total_burger<<endl;
cout<<"Pizza total: "<<setw(10)<<total_pizza<<endl;

cout<<"Total Bill: "<<setw(10)<<Bill<<endl;

cout<<"Thanks for the order";
return 0;
}