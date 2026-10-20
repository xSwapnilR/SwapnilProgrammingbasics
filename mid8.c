#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter the value of num: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        sum = sum + i;
    }

    printf("The sum of integers till %d is %d.\n", num, sum);
    return 0;
}