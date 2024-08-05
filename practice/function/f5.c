//with argument with return
#include<stdio.h>
int div(int a,int b){//int return type ,div=function nam(e.
    int r=a/b;         //(int a,int b) here int parameter (a&b) =parameter name
    return r;
}
int main(){
    int num1,num2;
    printf("enter number:");
    scanf("%d %d",&num1,&num2);
   // int r=div(num1,num2);
    printf("division=%d",div(num1,num2));
}
//with agument
//here (int a, int b) is argument

//with return
//int div   
