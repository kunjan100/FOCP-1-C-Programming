#include<stdio.h>
/*Even, Odd or Special
Implement a C program that takes an integer n.
• If n is divisible by both 2 and 5, print Special.
• If it is divisible only by 2, print Even.
• If it is divisible only by 5, print Five.
• Otherwise, print Odd/Other.*/
int main(){
    int n;
    printf("enter no.:");
    scanf("%d",&n);

    if(n%2==0 && n%5==0){
        printf("SPECIAL");
    }
 
    else if(n%2==0 && n%5!=0){
        printf("EVEN");
    }
        
    else if(n%2!=0 && n%5==0){
        printf("FIVE");
    }
    
    else{
        printf("odd");
    }
    return(0);
}