//FOR LOOP QUESTION
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i=1;i<=n;i++) {
        if (i%2 != 0)   //ess line matlb hai ki i ka 2 se divide krne pr remainder 0 nahi aata toh
        cout<<i<<endl;

    }
    return 0;
}
    */

    //WHILE LOOP QUESTION
    /* #include <iostream>
    using namespace std;
    int main() {
        int n;
        cout<<"Enter the value of n";
        cin>>n;

        while (n>=1) {
            cout<<n<<endl;
            n--;
        }
        cout << "End" << endl;
        return 0;
    }*/

    #include <iostream>
using namespace std;

int main() {
    int num = 0;
    do {
        cout << "Enter a number: ";
    cin >> num;
    } while (num != 0);
    return 0;
}