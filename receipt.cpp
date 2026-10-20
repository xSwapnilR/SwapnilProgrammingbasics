#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double price = 45.5;
   cout << fixed << setprecision(2);
cout << setw(10) << "Apple" << setw(10) << price <<endl;
cout << setw(10) << "Milk" << setw(10) << 30.0 << endl;
return 0;


}