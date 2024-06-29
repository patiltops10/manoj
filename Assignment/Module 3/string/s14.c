//Write a program in C to combine two strings manually.
#include<stdio.h>
 #include<string.h>//predefined function
 int main(){
     char str[50],str2[40];
     printf("Enter any string:");
     gets(str);//input
     printf("Enter any string2:");
     gets(str2);//input

 strcat(str,str2);
 printf(str);
   
     return 0;
 }
 //nok
 