#include <iostream>
using namespace std;
int volume (int side) {
    return side*side*side;
}
int volume(double radius, int height) {
    return 3.14*radius*radius*height;

}
int main () {
    cout<<"The volume of cube is "<<volume(3)<<endl;
    cout<<"The volume of cylinder is "<<volume(5,10);
    return 0;
}
