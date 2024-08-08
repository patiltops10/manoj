
//check upper and lower case or digit or special character
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("uppercasse_letter:");
    }
    else if(ch>='a' && ch<='z'){
        printf("lowercase_letter:");
    }
    else if(ch>='0' && ch<='9'){
    printf("Digit:");
    }
    else{
    ("special_character:");
    }
}