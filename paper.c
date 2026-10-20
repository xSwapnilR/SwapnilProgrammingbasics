// Q1 (iv):
// #include <stdio.h>
// int main () {
//     int num1;
//     int num2;
//     int sum;
//     printf("Enter the value of num1 and num2  : ");
//     scanf("%d %d",&num1,&num2);
//     sum = num1 + num2;
//     printf("The sum of %d and %d is %d", num1, num2, sum);
//     return 0;
// }

// Q4:
// #include <stdio.h>
// int main()
// {
//     int age;

//     printf("Enter your age: ");
//     scanf("%d", &age);

//     switch (age)
//     {
//     case 1:
//         if (age >= 18)
//         {
//             printf("You are allowed in the party.");
//         }
//     case 2:
//         if (age < 18)
//         {
//             printf("You are not allowed in the party.");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char signal; // R = Red, Y = Yellow, G = Green
//     printf("Enter the signal colour:");
//     scanf("%c",&signal);

//     switch (signal)
//     {
//     case 'R':
//         printf("STOP\n");
//         break;

//     case 'Y':
//         printf("WAIT\n");
//         break;

//     case 'G':
//         printf("GO\n");
//         break;

//     default:
//         printf("Invalid Signal\n");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int num, rev = 0, r;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    int temp = num;
    while (num != 0)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
if (rev == temp) {
    printf("The number in num is a pallindrome.");
}
else {
    printf("The number is not pallindrome.");
}
return 0;
}