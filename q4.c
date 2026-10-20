#include <stdio.h>

int main() {
    int income;
    printf("Enter your income: ");
    scanf("%d",&income);

    if (income<250000 ) 
    {
        printf("NO TAX\n ");
    }
    else if (income>=250000 && income<500000) 
    {
        printf("You are in 5%% tax bracket\n");
    }
else if  (income>=500000 && income<=1000000)  {
   
    printf("You are under 20%% tax bracket\n");

}
else  {
    printf("You are under 30%% tax bracket\n");
}
    
    
    return 0;
}