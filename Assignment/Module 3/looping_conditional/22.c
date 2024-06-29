//23. C Program to Reverse a Number Using FOR Loop

#include <stdio.h>

int main(){
    int number,rem;
    printf("Enter an integer: ");
    scanf("%d", &number);
    for(number;number>0;){
        rem = number%10;
        printf("%d",rem);
       number = number/10;
    }
}
    
