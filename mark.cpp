#include <iostream>
using namespace std;
int main() {
    int m1;
    int m2;
    int m3;
    cout << "Enter marks in m1";
    cin>> m1;
    cout << "Enter marks in m2";
    cin>> m2;
    cout << "Enter marks in m3";
    cin>> m3;
    float total = m1+m2+m3;
    cout << "The total marks are: " << total;
    float average_marks = total/3.0;
    cout << " The average marks is: " << average_marks;
    return 0;
}