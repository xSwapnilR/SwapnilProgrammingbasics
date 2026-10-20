#include <iostream>
#include<fstream>
using namespace std;
int main () {
    string st = "Harry bhai";
    string st2;
    ofstream out("sample60.txt");
    out<<st;
    return 0;
}