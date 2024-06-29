#include<stdio.h>
void main(){
        int row,col,space;

        for(row=0;row<=5;row++){
         for(space=0;space<row;space++){
                printf("  ");
            }
            for(col=5;col>=row;col--){
                printf("* ");
            }
    printf("\n");
       }
}