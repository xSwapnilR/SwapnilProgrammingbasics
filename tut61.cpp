#include <iostream>
#include <fstream>
using namespace std;
int main () {
    //connecting our file with hout stream
    ofstream hout("sample61.txt");

    string name;
    cout <<"Enter your name: ";
    cin>>name;
    hout<<"My name is " + name;


hout.close();
    return 0;
}