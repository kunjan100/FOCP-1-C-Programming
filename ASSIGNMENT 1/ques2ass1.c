#include<stdio.h>
/* Accept and Display User Details 
Implement a C program to accept the following details from the user using scanf():
• Age • Height (in meters) • Grade (single character)
Display all the entered values clearly using printf().*/
int main(){
    int age;
    float height;
    char grade;

    printf("enter age:");
    scanf("%d",&age);
    printf("enter height in mtr:");
    scanf("%f",&height);
    printf("enter grade:");
    scanf(" %c",&grade);

    printf("AGE = %d\n",age);
    printf("HEIGHT = %.2f\n",height);
    printf("GRADE = %c\n",grade);

    return (0);
}