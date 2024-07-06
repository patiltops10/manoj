//nested if condition.
#include<stdio.h>

int main(){
int number;
 printf("Enter number:");
 scanf("%d",&number);
 if(number>=0){
    printf("the no is positive:\n");
 if(number %2==0){
    printf("number is even:\n");

 }
 else{
    printf("number is odd:");
 }
 

 }
 else{
    printf("the no is negative:\n");
 }
    
}