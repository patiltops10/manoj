//Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
 #include<string.h>//predefined function
 int main(){
     char str[50];
     printf("Enter any string:");
     gets(str);//input
     printf(strrev(str));//output

     return 0;
 }
 