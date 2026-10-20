#include <iostream>
using namespace std;
int main()
{
    int num;
    int r, rev = 0;
    cout << "Enter the number: " << endl;
    cin >> num;
    int temp = num;
    while (num != 0)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    cout<<"Reversed no is "<<rev<<endl;
    if (temp == rev)
    {
        cout << "It is a pallindrome." << endl;
    }
    else
    {
        cout << "It is not a pallindrome." << endl;
    }
    return 0;
}