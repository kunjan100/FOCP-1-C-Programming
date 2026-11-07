#include<stdio.h>
/*Swap Two Numbers 
Implement a C program to accept two integer values and swap their values using a third variable. 
Display the values: • Before swapping • After swapping */
int main(){
    int a,b;
    printf("enter 1st no. :");
    scanf("%d",&a);
    printf("enter 2nd no. :");
    scanf("%d",&b);

    printf("BEFORE SWAPPING = %d %d\n",a, b);
    printf("AFTER SWAPPING = %d %d\n",b, a);
    return (0);

}