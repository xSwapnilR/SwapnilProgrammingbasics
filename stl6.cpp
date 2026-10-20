#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(20);
    dq.push_front(10);
    dq.push_back(30);
    dq.push_back(40);

    cout<<"Front element "<<dq.front()<<endl;
    cout<<"Back element"<<dq.back()<<endl;

    cout<<"Deque Elements"<<endl;
    for (int i = 0; i < dq.size(); i++) {
        cout<<dq[i]<<" ";

    }
    return 0;
}