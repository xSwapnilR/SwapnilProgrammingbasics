#include <iostream>
using namespace std;
int main () {
    int marks[4] = {23,45,32,90};
    marks[2] = 455;
    cout<<"---Printing using loop---"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<< " The value of marks " << i << " is " << marks[i] << endl;
    }
cout<<"\n---Pointer Operation---"<<endl;
int* p = marks;
cout<<"*(p++): "<<*(p++)<<endl;
cout<<"*(++p): "<<*(++p)<<endl;
return 0;
}