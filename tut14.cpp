#include <iostream>
using namespace std;
struct student
{
    /* data */
    int roll;
    float marks;
};
int main() {
    //yeh niche wala imp hai student gap then s1 ese hi likhte hai. check one ex file name is tut141.cpp.
    student s1;
    s1.roll = 101;
    s1.marks = 85.5;
 
    cout<<"Name: Rahul "<<"\nRoll: "<<s1.roll<<"\nMarks: "<<s1.marks<<endl;
return 0;

}
