//task10:
//1 2 3 4 5
//  2 3 4 5
//    3 4 5
//      4 5
//        5
#include<stdio.h>

int main(){
  int  row,col,space;
  int num=1;

    for(row=0;row<=4;row++){
      num=row+1;
        for(space=1;space<=row;space++){
            printf("  ");
        }

for(col=4;col>=row;col--){
  printf("%d ",num++);
   
}
num++;
    
 printf("\n");
    }
    

}