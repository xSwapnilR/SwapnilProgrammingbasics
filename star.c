// #include <stdio.h>
// int main()
// {
//     int rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main () {
//     char ch;
//     char s[100];
//     char sen[100];
//     scanf("%c", &ch);
//     scanf("%c", &s);
//     scanf("%c", &sen);
//     printf("C",ch);
//     printf("\nLanguage",s);
//     printf("\nWelcome to C",sen);
// return 0;

// }

//Write a C program to input a number n from the user and 
//check whether it is a Prime Number or 
//Composite Number using a loop.
#include <stdio.h>

int main(void) {
    int num, i, isPrime = 1;

    printf("Enter the value of num: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("It is not a prime number.\n");
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1) {
        printf("It is a prime number.\n");
    } else {
        printf("It is a composite number.\n");
    }

    return 0;
}