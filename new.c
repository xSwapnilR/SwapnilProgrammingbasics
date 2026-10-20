#include <stdio.h>

int main() {
    int product = 1;
    int n = 4;
    for (int i = 1; i <= 4; i++)
    {
        product*=i;
    }
    printf("The factorial is %d\n",product);
    return 0;
}