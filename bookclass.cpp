#include <iostream>
using namespace std;
class Book {
    private:
    int price;
    int pages;

     public:
    void setDetails(int price, int pages) {
        cout<<"The price of the book is "<<price<<" and it has "<<pages<<endl;
    }
    void displayDetails() {
        return;
    }
};

    int main () {
        Book b1;
        b1.setDetails(500,250);
        b1.displayDetails();
        return 0;
        
    }
