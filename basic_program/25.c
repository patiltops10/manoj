//check number is positive or negative
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);

    if(number>0){
        printf("number is positive:");
    }
    else if(number<0){
        printf("number is negative:");

    }
    else{
    printf("number is 0:");

    }
}