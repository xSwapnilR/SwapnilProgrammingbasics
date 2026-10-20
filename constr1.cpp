#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int rollno;

public:
    Student()
    {
        name = "Unknown\n";
        rollno = 0;
        cout << "Default constructor Call hua " << endl;
    }
    Student(string n, int r)
    {
        name = n;
        rollno = r;
        cout << "Parameterized constructor call hua " << endl;
    }
    void display()
    {
        cout << "Name: " << name << "Roll no: " << rollno << endl;
    }


void setname(string newName)
{
    name = newName;
}
void setRoll(int newRoll)
{
    rollno = newRoll;
}

};
int main()
{
    Student s1("Rahul\n", 411);
    cout << "Pehle ki values\n";
    s1.display();
    s1.setname("Amit\n");
    s1.setRoll(100);
    cout << "Badalne ke baad" << endl;
    s1.display();
    return 0;
}