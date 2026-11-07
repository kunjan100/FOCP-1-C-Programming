#include<stdio.h>
/*Day Number → Working Day / Weekends
Take a number from 1 to 7 and use switch:
1 → Monday
2 → Tuesday
...
7 → Sunday
Along with the day name, print:
• Working Day for Monday–Friday
• Weekend for Saturday–Sunday
For any other number, print Invalid Day.*/
int main(){
    int n;
    printf("enter day no.:");
    scanf("%d",&n);

    switch(n){
        case 1:
            printf("MONDAY\n");
            printf("Working day");
            break;
        case 2:
            printf("TUESDAY\n");
            printf("Working day");
            break;
        case 3:
            printf("WEDNESDAY\n");
            printf("Working day");
            break;
        case 4:
            printf("THURSDAY\n");
            printf("Working day");
            break;
        case 5:
            printf("FRIDAY\n");
            printf("Working day");
            break;
        case 6:
            printf("SATURDAY\n");
            printf("Weekend");
            break;
        case 7:
            printf("SUNDAY\n");
            printf("Weekend");
            break;
        default:
            printf("INVALID DAY NUMBER");
    }
    return(0);
    
}