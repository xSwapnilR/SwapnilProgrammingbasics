#include <stdio.h>
int main() {
    int n = 11;
    int prime = 0;
    for (int i ; i < n; i++)
    {
       if (n%2 == 0) 
       {
        prime = 1;
       }
}
if (prime)
{
    printf("%d is not prime\n",n);
}
else {
    printf("%d is prime\n",n);
}
    return 0;
}