// #include <stdio.h>
// int main () {
//     char Name;
//     int age;
//     int roll_no;

//     printf("Enter the name of student: ");
//     scanf("%s",Name);

//     printf("Enter your age: ");
//     scanf("%d",age);

//     printf("Enter you roll no: ");
//     scanf("%d",roll_no);

//     printf("\n---STUDENT DETAILS---\n");
//     printf("Name: %s\n",Name);
//     printf("Age: %d\n",age);
//     printf("Roll No: %d\n",roll_no);

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
        num = num % 10;
        rev = rev * 10 + r;
        r = num / 10;
    }
if (rev == temp) {
    printf("The number in num is a pallindrome.");
}
else {
    printf("The number is not pallindrome.");
}
return 0;
}