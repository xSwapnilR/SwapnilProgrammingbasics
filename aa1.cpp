#include <iostream>
using namespace std;
void swapValue (int a,int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapPointer (int* a,int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main () {
    int x=4 , y=5;
    cout<<"---BEFORE SWAP---"<<endl;
    swapValue (x,y);
    cout<<"\nThe swap value of x is "<< x <<" and y is "<<y<<endl;
    swapPointer (&x,&y);
    cout<<"\nThe pointer value of x is "<< x <<" and y is "<<y<<endl;
 
    return 0;
}