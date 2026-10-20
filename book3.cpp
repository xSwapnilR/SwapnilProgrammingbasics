#include <iostream>
using namespace std;
struct book
{
    /* data */
    int bookID;
    string title;
    float price;
};
book b[2];

int main() {
    for (int i = 0; i < 2; i++)
    
    {
    cout<<"Enter the book ID: ";
    cin>>b[i].bookID;
    cout<<"Enter the book title: ";
    cin>>b[i].title;
    cout<<"Enter the book price:";
    cin>>b[i].price;
    }
    cout<<"STORED BOOK DETAILS"<<endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Book " << i + 1 << " ID: " << b[i].bookID << endl;
        cout << "Title: " << b[i].title << endl;
        cout << "Price: " << b[i].price << endl;
    }
    
    
    return 0;
}
