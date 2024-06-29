//ternary operator (expression )?true :false
//(9>5)?1:0
#include<stdio.h>
int main(){
    int num1,num2;
        printf("Enter num1:");
        scanf("%d",&num1);

        printf("Enter num2:");
        scanf("%d",&num2);

        (num1>num2)?printf("%d is greater.",num1):printf("%d is greater",num2);
}   