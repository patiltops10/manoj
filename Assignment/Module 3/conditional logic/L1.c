#include<stdio.h>
int main(){
    int num1,num2;

    printf("enter the first integer.");
    scanf("%d",&num1);

    printf("enter the second integer.");
    scanf("%d",&num2);

    if (num1 == num2){
    
        printf("the two integers are equal.\n");
         }   
        else{
        printf("the integers are not equal.\n");
        }
        return 0;
}

