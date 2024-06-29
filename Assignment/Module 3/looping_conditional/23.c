//1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main(){
    int sum=0;
    int x=1;
    while(x<=10){
        sum=sum+x;
        x++;
    }
    printf("sum:%d",sum);
}