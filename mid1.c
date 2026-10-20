// #include <stdio.h>
// int main()
// {
//     int num;
//     int factorial = 1;
//     int i = 1;
//     printf("Enter the value of num: ");
//     scanf("%d", &num);
//     if (num < 0)
//     {
//         printf("Enter a postive number.");
//     }
//     else
//     {
//         do
//         {
//             factorial = factorial * i;
//             i++;
//         } while (i <= num);
//         printf("The factorial of %d is %d", num, factorial);
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int num, i = 1;
    int factorial = 1;
do {
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } }while (num <0); 
    
        do {
            factorial *= i;
            i++;
        } while (i <= num);

        printf("Factorial of %d = %d\n", num, factorial);
    

    return 0;
    }