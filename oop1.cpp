#include <iostream>
#include <string>
using namespace std;
class Teacher {
    public:
    //non parametrised 
    Teacher () {
       department = "Computer Science" ;
    }

    Teacher (string n, string sub, string dept, double sal) {
n = name ;
sub = subject;
dept = department;
sal = salary;
    }
    //   properties
string name;
string subject;
string department;
double salary;

//member functions / method
void changeDept(string newDept) {
    department = newDept;
}


void setSalary(double s) {
    salary = s;
}

double getSalary() {
    return salary;
}
void getinfo(){
    cout<<"name: "<<name <<endl;
    cout<<"subject: "<<subject<<endl;
}

};
int main () {
    Teacher t1("Swapnil","Cse", "CS", 500000);
    t1.getinfo();
    t1.name = "Swapnil";
    t1.salary = 250000;
    t1.setSalary(500000);
    t1.getSalary() ;

    t1.department = "CS";
    t1.subject = "C++";

    cout<<t1.name<<endl;
    
    return 0;
}