#include<stdio.h>
/*Temperature Conversion 
Implement a C program to accept the temperature in Celsius and convert it into Fahrenheit. 
Formula: Fahrenheit = (Celsius × 9 / 5) + 32 Ensure that the output is displayed as a decimal value*/
int main(){
    float a;
    printf("enter temperature in celsius:");
    scanf("%f",&a);

    printf("TEMPERATURE IN FAHRENHEIT = %f",(a*9/5)+32);
    return(0);
}