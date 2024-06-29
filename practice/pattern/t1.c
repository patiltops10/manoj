//1. write a user defined function to print the multiplication table of the given number.  2*1=2
#include<stdio.h>

void main(){  
    int i,j, num;
    printf("Enter number:");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    
}
