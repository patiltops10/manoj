//if else statement.
#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    //use if else statement
    if(age>18){
        printf("is adult:\n");
        printf("is eligible for driving:\n");
        printf("is eligible for voting:\n");
    }
    else{
         printf("is not adult:\n");
        printf("is not eligible for driving:\n");
        printf("is not eligible for voting:\n");
    }
}