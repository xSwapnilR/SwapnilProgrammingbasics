#include <iostream>
using namespace std;

// 1. CALL BY VALUE (Swapping NAHI hogi)
// Yahan 'a' aur 'b' naye variables hain jinme 'x' aur 'y' ki VALUES copy hui hain.
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    // Sirf 'a' aur 'b' badle, main() ke 'x' aur 'y' ko pata bhi nahi chala.
}

// 2. CALL BY POINTER (Swapping HO JAYEGI)
// Yahan 'a' aur 'b' pointers hain jo 'x' aur 'y' ka ADDRESS hold kar rahe hain.
void swapPointer(int* a, int* b) {
    int temp = *a; // *a matlab address par rakhi asli value
    *a = *b;       // Asli address par value overwrite kar di
    *b = temp;
}

// 3. CALL BY REFERENCE (Swapping HO JAYEGI - Sabse Clean C++ Way)
// Yahan 'a' aur 'b' naye variables nahi hain, ye 'x' aur 'y' ke ALIAS (Nicknames) hain.
void swapReference(int &a, int &b) {
    int temp = a; // Directly 'x' ki value uthayi
    a = b;        // Directly 'x' mein 'y' daal diya
    b = temp;     // Directly 'y' mein temp daal diya
}

int main() {
    int x = 4, y = 5;

    cout << "--- BEFORE SWAP ---" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // Test 1: Call by Value
    swapValue(x, y);
    cout << "\nAfter Call by Value: x = " << x << ", y = " << y << " (No Change)";

    // Test 2: Call by Pointer
    swapPointer(&x, &y); // &x matlab x ka address bhejo
    cout << "\nAfter Call by Pointer: x = " << x << ", y = " << y << " (Swapped!)";

    // Values ko wapas normal kar dete hain testing ke liye
    x = 4; y = 5;

    // Test 3: Call by Reference
    swapReference(x, y); // Normal syntax, par memory mein direct change!
    cout << "\nAfter Call by Reference: x = " << x << ", y = " << y << " (Swapped!)" << endl;

    return 0;
}