//13.calculate the Factorial of a Given Number using while loop 


#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter number");
    scanf("%d",&num);
    while(num>=1){
        fact=fact*num;
        num--;
    }
      printf("Factorial =%d",fact);
}
