//use ternery operator.
#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    age>=18? printf("Adult:\n"): printf("Not adult:\n");

    return 0;
}