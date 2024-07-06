//do while loop.
// #include<stdio.h>

// int main(){
//     int i=0;
//     do{
//         printf("%d\n",i);
//         i++;
//     }while(i<=5);
// }

// #include<stdio.h>

// int main(){
//     int i=5;
//     do{
//         printf("%d\n",i);
//         i--;
//     }while(i>=0);
// }

//print the sum of first n natural numbers.
//also print them in reverse.
// #include<stdio.h>
// int main(){
//     int n;
//     int i;
    
//     printf("Enter the numbers:");
//     scanf("%d",&n);
//     int sum = 0;
// for(i=0;i<=n;i++){
//     sum=sum+i;
// }
//     printf("sum is %d \n",sum);
    
//     for(i=n;i>=1;i--){
//     printf("%d \n",i);
//     }
// }


#include<stdio.h>

int main(){
    int i;
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d \n",n*i);
    }
}