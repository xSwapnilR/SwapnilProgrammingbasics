#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Shopping Cart Vector
    vector<string> cart;

    // Cart mein items add karna
    cart.push_back("iPhone 15");
    cart.push_back("AirPods Pro");
    cart.push_back("MacBook Air");

    // Fast Indexing (0-based)
    cout << "First Item: " << cart[1] << endl; // Output: AirPods Pro

    // Fast Traversal (Loop)
    for (string item : cart) {
        cout << "- " << item << endl;
    }
    return 0;
}