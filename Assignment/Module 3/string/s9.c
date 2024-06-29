//Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter any string:");
    gets(str);
    printf("%d",strlen(str));
    gets(str);
}