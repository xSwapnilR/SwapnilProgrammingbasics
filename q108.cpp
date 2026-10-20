#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Swapnil";
    
    int start = 0;
    int end = name.length() - 1;

    while (start < end) {
        // Swap front character and back character
        swap(name[start], name[end]);
        start++;
        end--;
    }

    cout << "Reversed Name: " << name << endl;
    
    return 0;
}