// Program of Armstrong Number in C Using For Loop & While Loop 

#include<stdio.h>
int main(){
    int num,rem,sum=0,temp;
    printf("Enter number:");
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        rem=num%10;
        sum+=rem*rem*rem;
        num=num/10;
    }
    printf("Sum of digit:%d\n",sum);

    if(temp==sum){
        printf("Number is armstrong.");

    }
    else{
        printf("Number is not an armstrong number.");
    }
}