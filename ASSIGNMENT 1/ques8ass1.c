#include<stdio.h>
/*An employee's monthly salary consists of: • Basic Salary • Allowance • Bonus 
Implement a C program to accept these values and calculate the final salary. 
Formula: Final Salary = Basic Salary + Allowance + Bonus Display the final salary up to two decimal places*/
int main(){
    float a,b,c;

    printf("enter basic salary =");
    scanf("%f",&a);
    printf("enter allowance:");
    scanf("%f",&b);
    printf("enter bonus:");
    scanf("%f",&c);

    printf("TOTAL SALARY = %.2f",a+b+c);

    return(0);

}