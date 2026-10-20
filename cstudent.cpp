#include <iostream>
#include <string>;
using namespace std;
class Student {
    private:
    string name;
    int age;
    public:
    Student () {
        name = "Rahul";
        age = 10;
    }
    Student (string n, int a) {
name = n;
age = a;
    }
    void display () {
        cout<<"The name of the student is "<< name <<" and age is "<< age <<endl;
    }
};
int main () {
    Student s1;
    Student s2("Ramesh",20);
    s1.display();
    s2.display();
    return 0;

}