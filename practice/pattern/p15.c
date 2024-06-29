//task8:
//eeeee
// dddd
//  ccc
//   bb
//    a
#include<stdio.h>

int main(){
  int  row,col,space;
  char ch = 'e';

    for(row=1;row<=5;row++){
      
        for(space=1;space<=row;space++){
            printf("  ");
        }

for(col=5;col>=row;col--){
  printf("%c ",ch);
}

    ch--;
 printf("\n");
    }
    return 0;

}
        