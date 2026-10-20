#include <iostream>
using namespace std;
class student {
    private:
    int marks;
    void gradeChecker() {
        if (marks>=40)
        {
            cout<<"Passed"<<endl;
        }
        else {
            cout<<"Failed"<<endl;
        }
    }
    public:
    void inputMarks() {
        cout<<"Enter marks: "<<endl;
        cin>>marks;
    }
    void displayResult() {
           gradeChecker();
        }
    };

int main () {
    student s1;
    s1.inputMarks();
    s1.displayResult();
    return 0;
}