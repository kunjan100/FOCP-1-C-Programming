#include<stdio.h>
/*Calculate Quotient and Remainder 
Implement a C program to accept two integers and calculate: 
• Quotient • Remainder Use appropriate arithmetic operators and display both results. */
int main(){
    int a,b;
    printf("enter 1st no.:");
    scanf("%d",&a);
    printf("enter 2nd no.:");
    scanf("%d",&b);
    
    printf("QUOTIENT = %d\n",a/b);
    printf("REMAINDER = %d\n",a%b);
    return(0);
}