//continue statement.
#include<stdio.h>
int main(){
    int row=0,num;
    printf("Enter the number which want to skip:");
    scanf("%d",&num);

    while(row<20){
        row++;
        if(row==num){
            continue;
        }
         printf("%d \t",row);
        
    }

}