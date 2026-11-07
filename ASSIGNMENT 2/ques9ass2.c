#include<stdio.h>
/*Scholarship Eligibility
A student is eligible for a scholarship if:
• Marks are at least 75
• Attendance is at least 75%
However:
• If marks are 90 or above and attendance is at least 70%, print Special
Scholarship.
• Otherwise, if both normal conditions are satisfied, print Eligible.
• Else print Not Eligible.*/
int main(){
    float a,b;

    printf("enter marks:");
    scanf("%f",&a);
    printf("enter attendence:");
    scanf("%f",&b);
    
    if(a<0 || a>100 || b>100 || b<0){
        printf("INVALID INPUT");
    }
    else if(a>=90 && b>=70){
        printf("SPECIAL SCHOLARSHIP");
    }
    else if(a>=75 && b>=75){
        printf("ELIGIBLE");
    }
    else{
        printf("NOT ELIGIBLE");
    }
    return(0);
}