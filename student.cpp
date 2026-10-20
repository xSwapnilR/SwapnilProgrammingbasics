#include <iostream>
using namespace std;

class student {
    private: 
    int age;

    public:
    void setage(int a) {
        age = a;
    }
    void displayAge() {
        cout<<"The age of the student is "<<age<<endl;
    }
};
 int main () {
    student s1;      //object creation
    s1.setage(20);   //object call using dot operation
    s1.displayAge();  //Display fuction call
    return 0; 
 }



