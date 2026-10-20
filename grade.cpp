#include <iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter your marks(0-100) : ";
    cin>>marks;
    if (marks >=90) {
        cout <<"Grade A"<<endl;
    }
        else if (marks >=75) {
     cout <<"Grade B"<<endl;
        }
else if (marks >=50) {
    cout<<"Grade C"<<endl;
}
else {
    cout<<"You are Fail"<<endl;
}
return 0;
}