//Write a program you have to make a summation of first and last Digit. (E.g., 
//1234 Ans: -5) 
#include<stdio.h>
int main(){
    int num,l_digit,sum=0;
     printf("Enter the number:");
     scanf("%d",&num);
 
     l_digit = num % 10;

    while (num>=10){
        
        num = num /10;
    }
    sum = num+l_digit;
    printf("%d",sum);
}