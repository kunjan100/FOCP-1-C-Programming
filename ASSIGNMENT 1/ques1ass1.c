#include<stdio.h>
/*Q1. Display Student Information 
Implement a C program to store and display the following information using appropriate primitive data types:
1 Student ID 2 Age 3 Percentage 4 Grade Display all the information clearly using printf().*/
int main(){
   
    int STUDENTID = 101;
    int AGE = 17;
    float PERCENTAGE = 96.789;
    char GRADE = 'A';

    printf("Student Information\n");
    printf("Student ID: %d\n",STUDENTID);
    printf("Age: %d\n",AGE);
    printf("Percentage: %.2f%%\n",PERCENTAGE);
    printf("Grade: %c\n",GRADE);

    return (0);
}