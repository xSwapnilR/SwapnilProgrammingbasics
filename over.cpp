#include <iostream>
using namespace std;


void print(int x) {
    cout << "Integer: " << x << endl;
}

void print(string x) {
    cout << "String: " << x << endl;
}

int main() {
    print(3);
    return 0;
}
//अगर तुम print की जगह कोई नाम लिखते, कोई text लिखते हैं double quotes के अंदर, तो output आता string and then वो text. अगर तुम double quotes के अंदर कोई number भी लिख देते तो भी वो output आता string, and वो number, क्योंकि double quotes के अंदर, in double quotes, C++ always takes everything, even text, even number, as a string. If you are using it inside a double quote and if double quote is not there, you will simply write `print 3`, then the output will come as integer 3. 