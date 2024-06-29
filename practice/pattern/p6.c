
//*
//* *
//*   *
//*     *
//* * * * *

#include<stdio.h>
int main(){
    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            if(col==1||row==5||row==col){
    printf("*");
            }
        
        else{
            printf(" ");
        }
     }
        printf("\n");
    }
}       