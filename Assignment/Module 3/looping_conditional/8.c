// Write a program to find out the max from given number (E.g., No: -1562 
//Max number is 6)

#include<stdio.h>
int main(){
    int number;
    int max_digit=0;
    printf("Enter number:");
    scanf("%d",&number);

while(number>0){
    int digit = number %  10;
    
    if(digit > max_digit){
        max_digit = digit;
    }
    number = number / 10;

    printf("\nMax = %d",max_digit);
}
}
