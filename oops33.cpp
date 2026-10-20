#include <iostream>
#include <string>
using namespace std;
class employee
{
protected:
    string name;
    int identity;

public:
//default constructor call kiya pehle......
employee() {
    name = "guest";
    identity = 0;
}
//para contructor call kiya then....
    employee(string n, int id)
    {
        name = n;
        identity = id;
    }
    void displayEmp()
    {
        cout << "Name: " << name << "ID: " << identity << endl;
    }
};  
//child class banai......
class Manager : public employee
{
private:
    string department;

public:
    void setManager(string n, int id, string dep)
    {
        name = n;
        identity = id;
        department = dep;
    }
    void displayManager()
    {
        cout << "Department: " <<department<< endl;
        displayEmp();
    }
};
//int define karke code kahatam kiya.......
int main()
{
    Manager m1;
    m1.setManager("Mahindra\n", 111, "Sales Dept");
    cout<<"---MANAGER DETAILS---"<<endl;
    m1.displayManager();
    return 0;
}