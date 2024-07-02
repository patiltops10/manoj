#include<stdio.h>
int main(){
    int r,c,row,col,arr1[20][20],arr2[20][20],sum[20][20],sub[20][20],mul[20][20];
    printf("Enter no of rows:");
    scanf("%d",&r);
    printf("Enter  no columns");
    scanf("%d",&c);
   
    printf("Enter elements of array1");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter elements of array2");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
    printf("\n printing of array1");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",arr1[row][col]);
        }
    }

    printf("\n Array2");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",arr2[row][col]);
        }
    }

//multiplication code:    
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            mul[row][col]=0;
            for(int k=0;k<c;k++){
                mul[row][col]+=arr1[row][k]*arr2[k][col];
            }
        }
    }
    printf("\n Multiplication of arrays:");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",mul[row][col]);
        }
    }
}

