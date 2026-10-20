#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double cgpa;

    // Parameterized constructor
    Student(string name, double cgpa) {
        this->name = name;
        this->cgpa = cgpa;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s1("rahul", 8.9);
    Student s2(s1);
    s2.getInfo();

    return 0;
}