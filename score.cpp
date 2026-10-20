#include <iostream>
using namespace std;
int main() {
    int original_score=80;
    int &ref_score = original_score; //refernce variable

    cout << "Original score: "<<original_score<<endl;
    cout << "Reference score: "<<ref_score<<endl;
// Modifying value using reference variable
ref_score = 95;
cout<<"After update, Original score is: " <<original_score <<endl;
return 0;
}