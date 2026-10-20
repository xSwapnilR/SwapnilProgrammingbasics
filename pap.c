// #include <stdio.h>

// int main() {
//     int sum = 0;
//     int num;
//     do{
//     printf("Enter the value of num: \n");
//     scanf("%d", &num);
//     sum = sum + num;
//     }
//     while (num!=0);

// printf("The sum of all your input is %d", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num;
//     int product;
//     printf("Enter the value of num: ");
//     scanf("%d", &num);
//     for (int i = 1; i <= 10; i++)
//     {
//       printf("\n%d X %d = %d", num , i, num*i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the value of num: ");
//     scanf("%d", &num);
//     int i = 2;
//     while (i<num) {

//         if(num % i == 0) {

//             printf("The number is prime.");
// return 0;
//         }
//         i++;
//     }

//             printf("The number is not prime.");

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num;
//     int sum = 0;
//     do
//     {
//         printf("Enter the value of num: ");
//         scanf("%d", &num);
//         if (num < 0)
//         {
//             continue;
//         }
//         sum += num;
//     } while (num != 0);

//     printf("The sum of all postive numbers is %d", sum);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int num = 10; // Initial value non-zero rakhi taaki pehli baar loop chale
    int sum = 0;

    while (num != 0)
    {
        printf("Enter the value of num: ");
        scanf("%d", &num);
        sum += num;
        if (num < 0)
        {
            continue; // Negative numbers ko skip karo
        }
    }

    printf("The sum of all positive numbers is %d\n", sum);
    return 0;
}