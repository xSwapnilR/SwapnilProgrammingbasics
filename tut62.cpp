#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ofstream out;
    out.open("sample61.txt");
    out<<"This is me";
    out.close();
    return 0;
}