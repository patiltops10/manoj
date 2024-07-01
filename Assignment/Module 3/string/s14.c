//Write a program in C to combine two strings manually.
#include<stdio.h>
 #include<string.h>//predefined function
 int main(){
    int i, j,a, b, c;
     char str[100],str2[100];
     printf("Enter any string:");
     gets(str);//input
     printf("Enter any string2:");
     gets(str2);//input

     a = strlen(str);
     b = strlen(str2);

     c = a + b;

     char combine[c+1];

    for(i=0; i<a; i++){

        combine[i] = str[i];
    }
    
    for(j=0; j<b; j++){

        combine[i + j] = str2[j];
    }

    combine[c] = '\0'; 

    puts(combine);
 
   
     return 0;
 }
 //nok
 