#include <iostream>
using namespace std;
int main() {
    float m1;
    float m2;
    float m3;
    cout << "Enter marks in English:";
    cin>> m1;
    cout << "Enter marks in Mathematics:";
    cin>> m2;
    cout << "Enter marks in Science:";
    cin>> m3;
    float total = m1+m2+m3;
    cout << "The total marks are: " << total;
    float average_marks = total/3.0;
    cout << "\nThe average marks is: " << average_marks;
    return 0;
}