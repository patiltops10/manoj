//task 11:
// * * * - - 
// * * * - - 
// * * * - - 
// - - - - - 
// - - - - -
#include<stdio.h>
int main(){
    int row, col;
    for(row=1;row<=5;row++){
    for(col=1;col<=5;col++){
        if(row==4||row==5||col==4||col==5){
            printf("- ");
        }
        else{
        printf("* ");
        }
    }
    printf("\n");
    }
    
}