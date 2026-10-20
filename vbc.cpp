#include <iostream>
using namespace std;

// Base Class: Student
class Student {
protected:
    int roll_number;
public:
    void set_number(int a) {
        roll_number = a;
    }
    void print_number() {
        cout << "Your roll number is " << roll_number << endl;
    }
};

// Derived Class 1: Test (Virtual Base Class Student)
class Test : virtual public Student {
protected:
    float maths, physics;
public:
    void set_marks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }
    void print_marks() {
        cout << "Your result is here:" << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

// Derived Class 2: Sports (Virtual Base Class Student)
class Sports : virtual public Student {
protected:
    float score;
public:
    void set_score(float sc) {
        score = sc;
    }
    void print_score() {
        cout << "Your PT score is " << score << endl;
    }
};

// Final Derived Class: Result
class Result : public Test, public Sports {
private:
    float total;
public:
    void display() {
        total = maths + physics + score;
        print_number(); // No Ambiguity! Direct call to Student's function
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main() {
    Result harry;
    harry.set_number(4200);   // Works smoothly due to Virtual Base Class
    harry.set_marks(78.5, 99.5);
    harry.set_score(9);
    harry.display();

    return 0;
}