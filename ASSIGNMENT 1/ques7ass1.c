#include<stdio.h>
/* Calculate Total Marks and Percentage 
Implement a C program to accept marks obtained in five subjects, where each subject is out of 100. 
Calculate and display: • Total Marks • Percentage Ensure that the percentage is displayed correctly as a decimal value. */
int main(){
    float a,b,c,d,e;
    printf("enter eng marks:");
    scanf("%f",&a);
    printf("enter maths marks:");
    scanf("%f",&b);
    printf("enter science marks:");
    scanf("%f",&c);
    printf("enter hindi marks:");
    scanf("%f",&d);
    printf("enter sst marks:");
    scanf("%f",&e);

    printf("TOTAL MARKS OBTAINED = %.2f\n",a+b+c+d+e);
    printf("PERCENTAGE = %.2f%%\n",(a+b+c+d+e)/5);

    return(0);

}