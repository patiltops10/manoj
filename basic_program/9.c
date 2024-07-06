//if else statement.
#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);

    //use if else statement
    if(age>18){
        printf("is adult:\n");
        
    }
    else if(age>13 && age <18){
   printf("Teneeger:\n");
         
    }
    else{
        printf("Child:\n");
    }
}