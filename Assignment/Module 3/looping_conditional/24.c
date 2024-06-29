//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>

int main(){
    int N,count = 1,sum = 0;

    printf("Enter the limit\n");
    scanf("%d",&N);
    while(count<=N){
        sum = sum+(count*count);
        count++;
    }
    printf("sum of square ofnumbers from 1 to %d is %d \n",N,sum);
}