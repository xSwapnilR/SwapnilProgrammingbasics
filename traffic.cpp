#include <iostream>
using namespace std;
int main() {
    int lightCode;
    cout<<"Enter the light code (1-3)"<<endl;
    cin>>lightCode;
     switch(lightCode)
     {
        case 1:
        cout<<"Stop! The light is Red."<<endl;
        break;

        case 2:
        cout<<"Get Ready! The light is Yellow."<<endl;
        break;

        case 3:
        cout<<"Go! The light is Green."<<endl;

        default:
        cout<<"Invalid Light Code!"<<endl;

     }
    cout<<"Drive Safely!"<<endl;
    return 0;
}
