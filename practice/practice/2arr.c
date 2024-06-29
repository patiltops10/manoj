  //reverse array
 #include<stdio.h>
 int main(){
    int i,arr[5];
    printf("Enter elements:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=4;i>=0;i--){
        printf("%d",arr[i]);
    }
 }


 //sum of array.
 #include<stdio.h>
 int main(){
     int arr[5]={1,2,3,4,5,};
     int sum=0;
     int i;
     for(i=0;i<=4;i++){
         sum=sum+arr[i];
    }
     printf("%d",sum);
 }

