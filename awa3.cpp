#include <iostream>
using namespace std;
int main () {
    int num;
    do{
    cout << "Enter a positive number: " << endl;
    cin >> num;
    } while (num<=0) ;

    for (int i = 2; i<num/2; i++) {
        if (num%i==0) {
            cout<<"It is not a prime.";
            return 0;
        } 
    }
    
            cout<<"It is a prime.";
        
    
    return 0;
}