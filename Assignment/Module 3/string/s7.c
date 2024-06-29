//Write a program in C to copy one string to another string
#include<stdio.h>
 #include<string.h>//predefined function
 int main(){
     char str[50],str2[40];
     puts("Enter any string:");
     gets(str);//input
     strcpy(str2,str);
     puts(str2);//output

     return 0;
 }