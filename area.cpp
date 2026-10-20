#include <iostream>
using namespace std;
int area(int side) {
    return  side*side;
}
int area (int length, int breadth) {
    return length*breadth;

}
int main () {
    int a = 12, b = 15;
    cout<<"The area of square is "<<area(a)<<endl;
    cout<<"The area of rectangle is "<<area(a,b)<<endl;
    return 0;
}