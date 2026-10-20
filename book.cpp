#include <iostream>
using namespace std;
struct book
{
    int id;
    float price;
    int pages;

};
int main () {
   book b1;
   cout<<"Enter the book Id: "<<endl;
   cin>>b1.id;
   cout<<"Enter the price of book: "<<endl;
   cin>>b1.price;
   cout<<"Enter the number of pages: "<<endl;
   cin>>b1.pages;
   
   cout << "\n--- Book Details ---" << endl;
   cout<<"   ID: "<<b1.id<<endl;   
   cout<<"   PRICE: "<<b1.price<<endl;
   cout<<"   PAGES: "<<b1.pages<<endl; 
   
   return 0;

}
