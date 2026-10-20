#include <iostream>
#include <string>
using namespace std;
class Book {
    private:
    string title;
    int price;
    public:
    Book () {
        title = "Roadsides";
        price = 550;

    }
     Book (string bookname, int bookprice ) {
        title = bookname;
        price = bookprice;
     }

void display () {
    cout<<"The title of book is "<<title<<" and its price is "<< price <<endl;
}
};
int main () {
    Book b1;
    Book b2("roadsides", 550);
    b1.display();
    b2.display();
    return 0;
}