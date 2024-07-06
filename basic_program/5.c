//write a program to check if a number is odd or even
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("%d",x % 2==0);
}