
//A
//B C
//D E F
//G H I J
//K L M N 0
#include<stdio.h>
int main(){
int row,col;
char ch='A';
for(row=1;row<=5;row++){
    for(col=1;col<=row;col++){
        printf("%c",ch++);
    }
printf("\n");
     }
}
