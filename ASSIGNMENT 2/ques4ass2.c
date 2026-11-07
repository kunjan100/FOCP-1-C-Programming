#include<stdio.h>
/*Triangle Validator
Given three angles a, b, and c, implement a program to determine:
• Invalid if their sum is not 180 or any angle is 0 or negative.
• Acute if all three angles are less than 90.
• Right if exactly one angle is 90.
• Obtuse otherwise.*/
int main(){
    int a = 30;
    int b = 60;
    int c = 90;

    if(a+b+c!=180 || a<=0 || b<=0 || c<=0){
        printf("invalid");
    }
    else if(a<90 && b<90 && c<90){
        printf("ACUTE TRIANGLE");
    }
    else if(a==90 || b==90 || c==90){
        printf("RIGHT ANGLE TRIANGLE");
    }
    else{
        printf("OBTUSE TRIANGLE");
    }
    return(0);


}