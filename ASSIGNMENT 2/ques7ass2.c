#include<stdio.h>
/*ATM Withdrawal
An ATM allows withdrawal only when:
• PIN is correct (1234)
• Amount is a multiple of 100
• Amount is less than or equal to balance
• Amount is greater than 0
Given pin, amount, and balance, print:
• Invalid PIN
• Invalid Amount
• Insufficient Balance
• Withdrawal Successful
Implement the program using nested if.*/
int main(){
    int a,b,c;
    c = 700000000;
    printf("enter pin:");
    scanf("%d",&a);
    printf("enter amount:");
    scanf("%d",&b);

    if(b%100!=0){
        printf("Invalid amount");
    }
    else if(a!=1234){
        printf("Invalid PIN");
    }
    else if(b>c){
        printf("Insufficient balance");
    }
    else{
        printf("Withdrawal successful");
    }
    return(0);
}