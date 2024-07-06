//write a program to give grades to student.
//marks<30 is c
//30<= marks<70 is B
//70<=marks<90 is A
//90<=marks<=100 is A+
#include<stdio.h>

int main(){
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if(marks<30){ 
        printf("Grade C:");
    }
    else if(marks>=30 && marks<70){
        printf("grade B:");

    }
    else if(marks >=70 && marks<90 ){
        printf("Grade A:");

    }
    else if(marks>=90 && marks<=100){
        printf("Grade A+");
    }

}