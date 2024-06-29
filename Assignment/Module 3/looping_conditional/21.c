//22. Accept 3 numbers from user using while loop and check each numbers 
//palindrome

#include<stdio.h>
int main(){
    int num[3],rem,rev=0,temp;
    printf("Enter number 3 numbers:");
    scanf("%d",&num[3]);
    temp=num[3];
    while(num>0){
        rem=num[3]%10;
        rev=(rev*10)+rem;
        num[3]=num[3]/10;
    }
    printf("Reverse number[3]:%d\n",rev);
    if(temp==rev){
        printf("Number is palindrome.");
    }
    else{
        printf("Number is not palindrome.");
    }
}