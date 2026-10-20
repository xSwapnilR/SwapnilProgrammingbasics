#include <iostream>
using namespace std;

int main() {
    // 1. Range ke limits aur prime numbers count karne ke liye variables banaye
    int lower = 1, upper = 100;
    int count = 0; // Kitne prime milenge unko ginte rehne ke liye

    cout << "Prime numbers between " << lower << " and " << upper << " are:" << endl;

    // 2. OUTER LOOP: 10 se 30 tak ek-ek karke saare numbers uthayega
    for (int num = lower; num <= upper; num++) {

        // 1 ya usse chote numbers prime nahi hote, isliye unko skip karo
        if (num <= 1) continue; 

        // 3. FLAG VARIABLE: Default maan liya ki current 'num' prime hai
        bool isPrime = true; 

        // 4. INNER LOOP: Check karega ki kya 'num' 2 se leke (num / 2) tak kisi se divide hota hai
        for (int i = 2; i <= num / 2; i++) {
            
            // Remainder 0 aaya matlab poora divide ho gaya
            if (num % i == 0) {
                isPrime = false; // Divide hua, toh ab ye prime nahi raha
                break;           // Ek factor mil gaya, aage check karne ka time waste mat karo
            }
        }

        // 5. Agar inner loop ke baad bhi isPrime 'true' hi raha, matlab koi divisor nahi mila
        if (isPrime) {
            cout << num << " "; // Prime number print karo
            count++;            // Total count ko +1 badha do
        }
    }

    // 6. Saari range check hone ke baad total kitne prime mile, wo print karo
    cout << "\n\nTotal prime numbers found: " << count << endl;

    return 0;
}