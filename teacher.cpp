#include <iostream>
using namespace std;

// STEP 1: Forward Declaration
class Student; 

// STEP 2: Teacher Class Definition
class Teacher {
public:
    // Sirf function ki declaration di (body abhi nahi likhi)
    void checkMarks(Student s); 
};

// STEP 3: Student Class Definition
class Student {
private:
    int marks = 95; // Private Data

public:
    // Teacher class ke specific function ko friend banaya
    friend void Teacher::checkMarks(Student s); 
};

// STEP 4: Teacher Function ki Body Definition
void Teacher::checkMarks(Student s) {
    // Ab Student ki poori class compiler ke paas hai, toh 's.marks' access hoga!
    cout << "Student ke marks hain: " << s.marks << endl;
}

int main() {
    Student st;
    Teacher t;

    t.checkMarks(st); // Output: Student ke marks hain: 95

    return 0;
}