//A B C D E
//A B C D
//A B C
//A B
//A
#include<stdio.h>
int main(){
        int row,col,space;

        for(row=0;row<=5;row++){
            
         for(space=0;space<row;space++){
                printf("  ");
            }
            for(col=5;col>=row;col--){
                printf("A");
            }
    printf("\n");
       }
}