#include <stdio.h>
int main () {
    int num,sum = 0, r, rev = 0;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    int temp = num;
    while (num !=0) {
        r = num % 10;
        rev =  rev *10  + r;
        num = num /10;
    }
    if (temp == rev) {
        printf("The number is same as its reverse");

    }
    else {
        printf("Nothing happy happened");
    }
        return 0;
}