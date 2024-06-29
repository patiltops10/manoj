//4. WAP to print table up to given numbers
#include<stdio.h>
int main(){
    int number,i;
    printf("Enter the no which you want to table:");
    scanf("%d",&number);

  for(i=0;i<=10;i++){
    printf("%d * %d = %d\n",number,i,number*i);

  }
   
   
}