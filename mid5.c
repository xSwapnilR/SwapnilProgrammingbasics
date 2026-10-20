#include<stdio.h>
 int main()
 {
 float Cel,Fahren;
 printf("enter the temperature in Celsius\n");
 scanf("%f",&Cel);
 Fahren=9/5*Cel+32;
printf("the temperature in Celsius is %f\n", Cel);
 printf("corresponding temperature in Fahrenheit is %f\n",Fahren);
 return 0; 
 }