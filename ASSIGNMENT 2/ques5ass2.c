#include<stdio.h>
/*Simple Calculator using switch
Take two numbers and an operator (+, -, *, /, %) and perform the corresponding
operation using switch.
For division:
• If the second number is 0, print Cannot divide by zero.*/
int main(){
    float a;
    float b;
    char op;

    printf("enter 1st no:");
    scanf("%f",&a);
    printf("enter 2nd no:");
    scanf("%f",&b);
    printf("enter operator(+,-,*,/,%%):");
    scanf(" %c",&op);

    switch(op){
        case '+': 
            printf("%.2f",a+b);
            break;
        case '-': 
            printf("%.2f",a-b);
            break;
        case '*': 
            printf("%.2f",a*b);
            break;
        case '/':
            if(b!=0){
                printf("%.2f",a/b);
            }
            else{
                printf("Cannot divide by zero");
            }
            break;
        case '%':
            if(b!=0){
                printf("%d",(int)a % (int)b);
            }
            else{
                printf("cnnot be divided by zero");
            }
            break;
        default:
            printf("invalid input");
    }
    return(0);
}