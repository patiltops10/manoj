//greatest among three nos
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter the three numbers:");
    scanf("%d,%d,%d",&num1,&num2,&num3);
    if(num1>=num2 && num1>=num3){
    
        printf("num1 greeatest:");
    }
    else if(num2>=num1 && num2>=num3){
    
    printf("num2 greatest:");

    }
    else{
        printf("num3 greatest:");
    }

}
