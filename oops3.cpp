#include <iostream>
#include <string>
using namespace std;
class bankAccount {
    private:
    string name;
    double balance;
    public:
//abb default constructor bana rha hu ----
bankAccount () {
 name = "guest\n";
 balance = 0.0;

}
//parameterised contructor call kiya hai 
bankAccount (string n, double bal){
    n = name;
    bal = balance;
}
void display () {
    cout<<"Name: "<<name<<"balance:" <<balance<<endl;

}

};
int main () {
    bankAccount b1;
    b1.display();
    return 0;
}