//task9:
//5 5 5 5 5
//  4 4 4 4
//    3 3 3
//      2 2
//        1
#include<stdio.h>

int main(){
  int  row,col,space;
  int num=5;

    for(row=1;row<=5;row++){
      
        for(space=1;space<=row;space++){
            printf("  ");
        }

for(col=5;col>=row;col--){
  printf("%d ",num);
}

    num--;
 printf("\n");
    }
    return 0;

}