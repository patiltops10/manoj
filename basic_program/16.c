// //factorial
// #include<stdio.h>

// int main(){
//     int num,fact=1;
//     printf("Enter number");
//     scanf("%d",&num);
//     while(num>=1){
//         fact=fact*num;
//         num--;
//     }
//       printf("Factorial =%d",fact);
// }

#include<stdio.h>
int main(){
    int number;
    int fact = 1;
    printf("enter number:");
    scanf("%d",&number);

    fact = number*(number-1);
    printf("fact number:%d",fact);

}

