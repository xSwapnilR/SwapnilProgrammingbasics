#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int roll_no,sub1,sub2;

    cout<<"Roll no: ";
    cin>>roll_no;

     cout<< "Marks in subject 1: ";
     cin>>sub1;

     cout<<"Marks in subject 2: ";
     cin>>sub2;

     double total=sub1+sub2;
     double average = total/2;
     cout<<endl;
    
     cout<<setw(18)<<"Roll No: "<<roll_no<<endl;
     cout<<setw(18)<<"Total marks: "<<total<<endl;
     cout<<setw(18)<<"Average marks: "<<average<<endl;

     return 0;
}
