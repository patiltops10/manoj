//. Write a C Program to Print the Multiplication Table of N 
//i. E.g. 5 * 1 = 5 
//ii. 5 * 2 = 10 
//1. . 
//2. . 
//iii. 5 * 10 = 50
#include<stdio.h>

void main(){  
    int i,j;
    int number=5;
    printf("Enter no 5:");
    scanf("number:%d",&number);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",number,i,number*i);
    }
    
}