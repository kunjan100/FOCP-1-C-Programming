#include<stdio.h>
/*3. Electricity Bill Slab
Implement a program to calculate the electricity bill based on units consumed:
Units Rate
0–100 ₹2/unit
101–200 ₹3/unit
Above 200 ₹5/unit
Use if-else ladder.*/
int main(){
    float unit;
    printf("enter units consumed:");
    scanf("%f",&unit);

    if(unit>=0 && unit<=100){
        printf("Electricity bill = Rs %.2f",2*unit);
    }
    else if(unit>=101 && unit<=200){
        printf("Electricity bill = Rs %.2f",3*unit);
    }
    else if (unit>200){
        printf("Electricity bill = Rs %.2f",5*unit);
    }
    else{
        printf("invalid input");
    }
    return (0);
}