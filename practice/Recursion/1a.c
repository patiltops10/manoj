//recursion : function calling itself.


//factorial using recursion
// #include<stdio.h>
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     else{
//         n=n*fact(n-1);
//     }
// }
// int main(){
//     int num;
//     printf("Enter number:");
//     scanf("%d",&num);
//     printf("Factorial of given number =%d",fact(num));
// }
// #include <stdio.h>
// int sum(int n){
//     if(n>0){
//         n=n+sum(n-1);
//         return n;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int num;
//     printf("Enter num:");
//     scanf("%d",&num);
//     printf("Addition=%d:",sum(num));
// }
//fact
#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        n=n*fact(n-1);
    }
}
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    printf("factorial of given num=%d",fact(num));
}