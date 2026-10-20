#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int* ptr=&x;
   *ptr = 50;
   //yeh upar wali line execution time par chalti hai. *ptr compiler ko bolta hai: "Us dibbe ke andar jao jiska address tumhare paas hai, aur wahan rakhi purani value (10) ko mita kar nayi value (50) likh do."
    cout<<"The updated value of x is "<<x<<endl;
    return 0;
}
//Key Takeaway
//10 gayab nahi hua; *ptr = 50; ne x ki memory location par jaakar purani value 10 ko 50 se replace kar diya.