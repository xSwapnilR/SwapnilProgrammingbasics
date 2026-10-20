#include <iostream>
using namespace std;
int main () {
    int marks[4] = {35, 75, 42, 90};
    int total = 0;
        for (int i = 0; i < 4; i++)
        {
            
            if (marks[i] < 50) {
                marks[i]+=10;

                cout<<"Marks at index "<< i <<" updated with bonus to "<< marks[i]<<endl;
            
        }

        else {
            cout<<" The marks at index "<< i << "is"<<marks[i]<<endl;
        
       total +=marks[i];
        }
    }
       int avg = total/4;
       switch (avg/10) 
       {
        case 8:
        cout<<"Grade A"<<endl;
        break;

        case 7:
        cout<<"Grade B"<<endl;
        break;
        case 6:
        cout<<"Grade C"<<endl;
        break;

        default:
        cout<<"Fail"<<endl;
       }
       cout<<"Done with Switch Case"<<endl;
       int* ptr = marks;
       int count = 0;
       while  (count<4) {
        cout<<"Mark at index"<< count << "is" <<*(ptr++)<<endl;
        count++;
       }
       
        return 0;
    }