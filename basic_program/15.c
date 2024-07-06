//write a program to find if a character entered by user is upper case or not.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);

    if(ch>='a'){
        printf("character lower case:");
    }
    else{
        printf("character is upper case:");
    }

}