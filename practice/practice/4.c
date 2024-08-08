#include<stdio.h>
int main(){
    int a,b;
    printf("Enter numbers:");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("a is greater:");
    }
    //else if(b>a && b>c){
      //  printf("b is greater:");
    //}
    else{
        printf("b is greater:");
    }
}
// //check number is greater or not from given 3 numbers; if else ladder
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter number:");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b && a>c){
//         printf("A is greater.");
//     }
//     else if(b>a && b>c){
//         printf("B is greater.");
//     }
//     else{
//         printf("C is greater.");
//     }
// }