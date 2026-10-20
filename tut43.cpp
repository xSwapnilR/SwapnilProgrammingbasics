// #include <iostream>
// using namespace std;

// class A {
// public:
//     int a;
// };

// class B : public A { }; // B ke paas 'a' aa gaya

// class C : public A { }; // C ke paas bhi 'a' aa gaya

// class D : public B, public C { }; // D ne B aur C dono se inherit kiya

// int main() {
//     D obj;
//     // obj.a = 10; 
//     // ❌ ERROR: request for member 'a' is ambiguous!
//     // Compiler pooch raha hai: B::a use karu ya C::a?
//     return 0;
// }
    

#include <iostream>
using namespace std;

class A {
public:
    int a;
};

// 'virtual' keyword ne duplicate copies banne se rok diya
class B : virtual public A { }; 

class C : virtual public A { }; 

class D : public B, public C { }; 

int main() {
    D obj;
    obj.a = 10; // ✅ Bilkul sahi! Koi ambiguity nahi hai.
    cout << "Value of a is: " << obj.a << endl;
    return 0;
}