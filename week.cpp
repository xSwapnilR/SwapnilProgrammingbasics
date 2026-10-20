#include <iostream>
using namespace std;
int main() {
    int daycode;
    cout<<"Enter the day code (1-3)"<<endl;
    cin>>daycode;

    switch(daycode)
{
    case 1:
    cout<<"Monday"<<endl;
    break;
    
case 2:
cout<<"Tuesday"<<endl;
break;

case 3:
cout<<"Wednesday"<<endl;
break;

default:
cout<<"There is no special case for that"<<endl;
break;

}
cout<<"Thank you very much.";
return 0;
}
