#include<stdio.h>
/*Implement a C program to calculate the total cost of an item.
The program should: • Accept the price of one item. • Accept the quantity purchased. • Calculate and display the total bill.
Formula: Total Bill = Price × Quantity*/
int main(){
    int quantity;
    float price;

    printf("enter price :");
    scanf("%f",&price);
    printf("enter quantity :");
    scanf("%d",&quantity);

    printf("TOTAL BILL = %.2f",price*quantity);
    return (0);
}