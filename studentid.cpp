#include <iostream>
using namespace std;
class student {
    private:
    int roll_no;
    static int totalstudents;
    public:
    void setrollno (int r) {
    roll_no = r;
    totalstudents++;
}
    static void printTotal () {
        cout<<"The total number of students are "<<totalstudents<<endl;
        
    }

};
int student :: totalstudents;
int main () {
    student s1,s2;
    s1.setrollno(1);
    s1.printTotal();
    s2.setrollno(2);
    s2.printTotal();

    return 0;

}