 //Accept marks from user and check pass or fail 


#include<stdio.h>

void main(){
    int score;
    printf("enter score");
    scanf("%d",&score);

  if (score >= 80){
        printf("First-class");
        }
        else if (score >= 60){
            printf("Second-class");
        }
        else if (score >= 40){
            printf("Third-class");
        }
        else{
            printf("Sorry! You are failed"); // You are failed
        }



}

