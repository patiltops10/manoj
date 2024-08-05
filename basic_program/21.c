//calculate a simple interest
#include<stdio.h>
int main(){
    float principle,rate,time,simple_interest;
    printf("Enter principle amount:");
    scanf("%f",&principle);

    printf("Enter annual interest:");
    scanf("%f",&rate);

    printf("Enter duration:");
    scanf("%f",&time);

    simple_interest=(principle*rate*time)/100;

    //printf("simple interest is=%2f\n",simple_interest);
    printf("simple interest=%f:",(principle*rate*time)/100);
}