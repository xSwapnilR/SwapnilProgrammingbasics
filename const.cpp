#include <iostream>
#include <string>
using namespace std;

class Tea {
    public:
    string Teaname;
    int serving;

    Tea(string name, int serv) {
    Teaname = name;
    serving = serv;
    }
};

int main () {
    Tea t1("Masala Tea",2);

  
cout << t1.Teaname << " - " << t1.serving << " cups" << endl;
    return 0;
}
