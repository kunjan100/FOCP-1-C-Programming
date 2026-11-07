#include<stdio.h>
/*Three Numbers – Find the Middle
Implement a program that takes three different integers a, b, and c and prints the
middle value (neither maximum nor minimum).*/
int main(){
    int a,b,c;
    printf("enter 1st no.:");
    scanf("%d",&a);
    printf("enter 2nd no.:");
    scanf("%d",&b);
    printf("enter 3rd no.:");
    scanf("%d",&c);

    if(a>c && a<b || a>b && a<c){
            printf("%d",a);
        }
    else if(b>c && b<a || b<c && b>a){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    return(0);
}