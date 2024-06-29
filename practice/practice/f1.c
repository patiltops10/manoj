// //no argument no return
#include<stdio.h>
void sum(){
    int a,b,res;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    res = a+b;
    printf("result=%d",res);
}
int main(){
    sum();
}
