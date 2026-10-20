#include <iostream>
using namespace std;

class shop {
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void shop :: setPrice(void) {
    if (counter >= 100) {
        cout << "Shop array is full!" << endl;
        return;
    }
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop :: displayPrice(void) {
    for (int i = 0; i < counter; i++) {
        cout << "The Price of item with Id " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main() {
    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}