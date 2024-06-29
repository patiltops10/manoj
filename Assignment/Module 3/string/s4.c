//Write a program in C to count the total number of words in a string
#include<stdio.h>
 #include<string.h>//predefined function
 int main(){
     char str[50];
    printf("Enter any string:");
     gets(str);//input
     printf("%d",strlen(str));//output

    return 0;
 }
 