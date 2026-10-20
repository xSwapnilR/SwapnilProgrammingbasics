#include <iostream>
using namespace std;
class rectangle {
    private:
    int lenght;
    int bredth;

    bool isValid() {
        if (lenght>0 && bredth>0)
        {
            return true;
        }
        else
       { return false;
        }
    }
    public:
    void setDimensions(int l, int b) {
        lenght = l;
        bredth = b;
    }
    void calculateArea () {
    if (isValid()) {
        cout<<"The area of rectangle is "<<lenght*bredth<<endl;
    } else {
        cout<<"Invalid Dimensions" <<endl;
    }
    }
};

int main () {
    rectangle r1,r2;
    r1.setDimensions(10,5);
    r1.calculateArea();

    r2.setDimensions(-3,18);
    r2.calculateArea();

    
    return 0;
}