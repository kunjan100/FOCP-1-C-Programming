#include<stdio.h>
/* Industry-Style Invoice Calculator 
A company wants to generate a simple invoice for a customer. 
Implement a C program to accept: • Product ID • Product Price • Quantity • Discount Percentage 
Calculate the following: Subtotal = Price × Quantity 
Discount Amount = Subtotal × Discount Percentage / 100
Final Amount = Subtotal − Discount Amount 
Display the following details in a properly formatted manner: Product ID Subtotal Discount Amount Final Payable Amount */
int main(){
    int a,b;
    float c,d;
    printf("enter product id:");
    scanf("%d",&a);
    printf("enter product price:");
    scanf("%f",&c);
    printf("enter product quantity:");
    scanf("%d",&b);
    printf("enter discount percentage:");
    scanf("%f",&d);

    printf("SUBTOTAL = %f\n",c*b);
    printf("DISCOUNT AMOUNT = %f\n",(c*b*d)/100);
    printf("FINAL AMOUNT = %f\n",(c*b)-(c*b*d/100));

    return(0);

}