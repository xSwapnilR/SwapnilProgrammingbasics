// Number of diagonals in a polygon = n * (n - 3) / 2
#include <stdio.h>

int main(void) {
    int diag;
    int n;

    printf("Enter the number of sides: ");
    scanf("%d", &n); 
    if(n<3) {
        printf("Invlalid");
    }
    else {

    diag = n * (n - 3) / 2;
    printf("A polygon with %d sides has %d diagonals.\n", n, diag);
    }
    return 0;
}