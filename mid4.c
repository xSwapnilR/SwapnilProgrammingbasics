#include <stdio.h>
int main () {
    int num1,num2;
     printf("Enter the value of num1: ");
        scanf("%d",&num1);
         printf("Enter the value of num2: ");
        scanf("%d",&num2);
        int temp;
        temp = num1;
        num1 = num2;
        num2 = temp;
       printf("Now the new value of num1 and num2 is %d and %d.",num1,num2);
       return 0;
}