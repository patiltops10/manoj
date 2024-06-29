// #include<stdio.h>
// int main(){
//     int i,arr[5]={64,9,8,4,3};
// int n;
//     for(i=0;i<4;i++){
//     printf("arr[%d]=%d\n",i,arr[i]);

// }
// printf("Enter number to accesss:");
// scanf("%d",&n);


//     //printf("Accessing  element at position at n index:arr[%d]=%d",n,arr[n]);
//    printf("acccessing element at position at n index:arr[%d]=%d",n,arr[n]);   
// }

#include<stdio.h>
int main(){
    int i, arr[10]={10,5,4,7,9,3,45,87,95,35};
    int n;
    for(i=0;i<10;i++){
        printf("arr[%d]=%d\n",i,arr[i]);

    }
    printf("Enter number to access:");
    scanf("%d",&n);

    printf("Accessing element at position at n index:arr[%d]=%d",n,arr[n]);
    
}