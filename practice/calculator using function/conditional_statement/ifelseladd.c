//check the no positive ,negative,zero
// if else ladder :
//syntax:
// if(condition){
//     statements;
// }
// else if(condition){
//     st;
// }
// else if(condition){
//     st;
// }
// else{
//     statements;
// }
#include<stdio.h>

int main(){
    int number;

    printf("Enter the number:");
    scanf("%d",&number);

    if(number>0){
        printf("Number is positive.");
    }
    else if(number<0){
        printf("the number is negative.");
    }
    else{
        printf("The number is zero.");
    }
        
}

    

    

