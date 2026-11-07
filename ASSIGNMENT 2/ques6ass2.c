#include<stdio.h>
/*Character Classifier
Implement a program that takes a character and prints:
• Vowel if it is a, e, i, o, u (uppercase or lowercase)
• Digit if it is 0–9
• Consonant if it is an English alphabet but not a vowel
• Special Character otherwise
Hint: Use logical operators and/or switch.*/
int main(){
    char ch;

    printf("enter character:");
    scanf(" %c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("VOWEL , LOWERCASE");
    }
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("VOWEL , UPPERCASE");
    }
    else if(ch>='0' && ch<='9'){
        printf("DIGIT");
    }
    else if(ch>'a' && ch<='z' && ch!='e' && ch!='i' && ch!='o' && ch!='u' || ch>'A' && ch<='Z' && ch!='E' && ch!='I' && ch!='O' && ch!='U'){
        printf("CONSONENT");
    }
    else{
        printf("SPECIAL CHARACTER");
    }
    return(0);
        
}