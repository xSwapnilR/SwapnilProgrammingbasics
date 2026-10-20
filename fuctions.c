#include <stdio.h>
//Funtion Prototype
int sum (int , int);

//Funtion Defination 
int sum (int a, int b) {
    printf("The sum is %d\n",a+b);
    return a+b;
}

int main () {
    int a1 = 10, b1 = 13;
    sum (a1,b1); 

    int a2 = 40 , b2 = -45;
    sum (a2,b2);
    return 0;
}