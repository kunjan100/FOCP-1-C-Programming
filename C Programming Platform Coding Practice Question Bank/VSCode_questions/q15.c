#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int stars = (n / 2) + 1; 

    for (int i = 1; i <= stars; i++) 
    {
        for (int j = 1; j <= i; j++) 
        { printf("*"); }
        
        for (int j = 1; j <= 2 * (stars - i); j++) 
        { printf(" "); }
        
        for (int j = 1; j <= i; j++) 
        { printf("*"); }
        
        printf("\n");
    }
    
    for (int i = stars - 1; i >= 1; i--) 
    {
        for (int j = 1; j <= i; j++) 
        { printf("*"); }
        
        for (int j = 1; j <= 2 * (stars - i); j++) 
        { printf(" "); }
        
        for (int j = 1; j <= i; j++) 
        { printf("*"); }

        printf("\n");
    }

    return 0;
}