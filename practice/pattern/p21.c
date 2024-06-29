
//       *
//      * *
//     * * *
//    * * * *
//   * * * * *
//       *
//      * *
//     * * *
//    * * * *
//   * * * * *
//     * * *
//     * * *
//     * * *
//     * * *
//     * * *
#include<stdio.h>
 int main(){
     int row,col,space;
     for(row=1;row<=5;row++){
        for(space=5;space>row;space--){
            printf(" ");
        }
        
        for(col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n");

     }
     for(row=1;row<=5;row++){
        for(space=5;space>row;space--){
            printf(" ");
        }
        
        for(col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n");
    }
 
    for(row=1;row<=5;row++){
        for(col=1;col<=4;col++){
            if(col==1){
                printf("  ");
            }
            else{
            printf("* ");

            }
    }
    printf("\n");
 }
 }
 