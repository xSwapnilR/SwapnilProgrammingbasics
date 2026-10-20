#include <iostream>
using namespace std;
void number(int n) {
    if (n == 0)
    {
return;
    }
    cout<<n<<"";
    number ( n-1);

}
int main () {
    int n = 9;
    number(9 );
        return 0;
}