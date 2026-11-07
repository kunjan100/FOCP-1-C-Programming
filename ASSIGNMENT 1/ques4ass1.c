#include<stdio.h>
/* Calculate Average of Three Numbers 
Implement a C program to accept three integer values and calculate their average. 
Ensure that the average is displayed as a decimal value, even when all input values are integers. */
int main(){
    float a,b,c;
    printf("enter 1st no. :");
    scanf("%f",&a);
    printf("enter 2nd no. :");
    scanf("%f",&b);
    printf("enter 3rd no. :");
    scanf("%f",&c);

    printf("AVERAGE = %.2f",(a+b+c)/3);
    return(0);
}