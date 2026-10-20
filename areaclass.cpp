#include <iostream>
using namespace std;
class rectangle  {
    private:
    int lenght;
    int width;

    public:
    void setdimensions(int lenght, int width) {
cout<<"The lenght of rectangle is "<<l<<"and width is "<<w<<endl;
    }
void calculateArea() {
    int area = lenght * width;
}
};
int main () {
    rectangle r1;
    r1.setdimensions (15,20);
    r1.calculateArea();
    
    return 0;
}