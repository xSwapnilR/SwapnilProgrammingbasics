#include <stdio.h>
float av(num1, num2, num3) {
    return ( num1 + num2 + num3 )/3.0;
}
int main () {
    float num1 = 23, num2 = 34, num3 = 10;
    printf("The average of three numbers is %f",av(23,34,10));
    return 0;
}

