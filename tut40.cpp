#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int r)
    {
        roll_no = r;
    }

    void get_roll_no(void)
    {
        cout << "The roll no is : " << roll_no << endl;
    }
};

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }

    void get_marks(void)
    {
        cout << "Your result is: " << (maths + physics) / 2 << "%" << endl;
    }
};

class Result : public Exam
{
public:
    void display_results(void)
    {
        get_roll_no();
        get_marks();
    }
};

int main()
{
    Result swapnil;
    swapnil.set_roll_no(453);
    swapnil.set_marks(94.0, 98.0);
    swapnil.display_results();
    return 0;
}