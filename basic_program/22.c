//find gross salary in c program

#include<stdio.h>
int main(){
    float gross_salary,basic_salary,other_allowence,HRA;

    printf("Enter basic salary:");
    scanf("%f",&basic_salary);

    printf("Enter HRA:");
    scanf("%f",&HRA);

    printf("Enter other allowence:");
    scanf("%f",&other_allowence);

    gross_salary=basic_salary+HRA+other_allowence;

    printf("gross salary=%2f/n",gross_salary);

}
