#include <iostream>  // C++ mein input/output operations (cin, cout) ke liye required header file.
#include <vector>    // STL Vector container ko code mein use karne ke liye required header file.[cite: 2]
using namespace std; // Standard namespace apply kar rahe hain taaki std::cin ya std::cout na likhna pade.[cite: 2]

int main()
{
    int n; // User se input lene ke liye integer variable declare kiya.

    // Screen par message display hoga user ko guide karne ke liye.
    cout << "Enter the size of vector  " << endl;

    // User jo input dega (vector ka size), wo 'n' variable mein store ho jayega.
    cin >> n;

    // Dynamic array (Vector) create kiya jo integers store karega. Currently yeh khali (empty) hai.[cite: 2]
    vector<int> v;

    // User ko bataya ja raha hai ki ab use 'n' elements enter karne hain.
    cout << "Enter" << n << "elements: " << endl;

    // Loop 0 se lekar (n-1) tak yaani n times chalega elements input lene ke liye.
    for (int i = 0; i < n; i++)
    {
        int val;    // Input element ko temporariy hold karne ke liye local variable.
        cin >> val; // User se element ka integer input liya.

        // push_back() function vector ke end mein element add karega aur vector ka size dynamically badhayega.[cite: 2]
        v.push_back(val);
    }

    // Accumulator variable: Vector ke saare elements ka total sum add karne ke liye initialize kiya.
    int sum = 0;

    // Initial max assume kiya: Vector ke pehle element (index 0) ko initial maximum maan liya.[cite: 2]
    int maxVal = v[0];

    // Loop vector ke size (v.size()) tak chalega saare elements ko check aur calculate karne ke liye.[cite: 2]
    for (int i = 0; i < v.size(); i++)
    {
        // Step 1: Current element (v[i]) ko sum mein add karke sum ko update kiya.
        sum = sum + v[i];

        // Step 2: Check kiya ki kya current element abhi tak ke maxVal se bada hai.
        if (v[i] > maxVal)
        {
            // Agar current element bada hai, toh maxVal ko update karke naya bada value set kar diya.
            maxVal = v[i];
        }
    }

    // Calculations poori hone ke baad total sum screen par print hoga.
    cout << "Sum of elements: " << sum << endl;

    // Vector ka sabse bada number screen par print hoga.
    cout << "Maximum element: " << maxVal << endl;

    return 0; // Program successfully execute hone ka signal.
}