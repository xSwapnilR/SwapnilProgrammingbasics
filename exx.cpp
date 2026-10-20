#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int rollNo;

    // Parameterized Constructor
    Student(std::string sName, int rNo) {
        name = sName;
        rollNo = rNo;
    }
};

int main() {
    // Attempt 1
    Student s1("Rahul", 101);

    // Attempt 2
    Student s2; 

    return 0;
}