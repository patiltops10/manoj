
#include<stdio.h>

int main(){
int i,arr[5] = {11,22,33,44,55};
int n;
for(i=0;i<5;i++){
printf("arr[%d] = %d \n",i,arr[i]);
}
printf("Enter the number access::");
scanf("%d",&n);
printf("accessing element at position at n index:arr[%d]",n,arr[n]);

}