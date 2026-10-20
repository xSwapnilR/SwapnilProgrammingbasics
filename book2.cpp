#include <iostream>
using namespace std;
struct book
{
    int id;
    float price;
    int pages;

};
int main () {
    book b[5];
    cout<<"Enter the details of 5 books: "<<endl;
    for (int i = 0; i < 5; i++)
    {

        cout<<"Enter the details for book "<<i+1<<": " <<endl;

        cout<<"Enter ID: ";
        cin>>b[i].id;
        cout<<"Enter Price: ";
        cin>>b[i].price;
        cout<<"Enter Pages: ";
        cin>>b[i].pages;
    }
    cout << "\n=================================" << endl;
    cout << "        STORED BOOK DETAILS       " << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < 5; i++)
    {
       cout<<"Book  : "<< i+1 <<"-> ID: "<<b[i].id<<endl;
       cout<<"Price: "<<b[i].price<<endl;
       cout<<"Pages: "<<b[i].pages<<endl;
    }
    
return 0;
    
}

