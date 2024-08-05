
//array is a derived data-type.
//static 1D array.
// #include<stdio.h>
// int main(){
//     int i, arr[5]={11,22,33,44,55};// declaration with intialization
//     int n;
//     for(i=0;i<5;i++){
//        printf("arr[%d] = %d \n",i,arr[i]);
//     }
//     printf("Enter number to access:");
//     scanf("%d",&n);
//     printf("Accessing  element at position at n index:arr[%d]=%d",n,arr[n]);    
// }
//  #include<stdio.h>
// int main(){
//     int i, arr[5]={11,22,33,44,55};
//     int n;
//     for(i=0;i<5;i++){
//     printf("arr[%d]=%d \n",i,arr[i]);
//     }
// printf("Enter the number to access:");
// scanf("%d",&n);
// printf("accessin element at position at n index:arr[%d]=%d",n,arr[n]);
// }


// 2-Dimension array : datatype array_name[row][col];
// #include<stdio.h>
// int main(){
//     int row,col,arr[2][3]={{12,18,16},{74,63,52}};
//     printf("printing 2-d array");
//     for(row=0;row<2;row++){
//         printf("\n");
//         for(col=0;col<3;col++){
//             printf("%d \t",arr[row][col]);
//         }
//     }
// }

// #include<stdio.h>
// int main(){
//     int row,col,arr[2][3]={{11,22,33},{44,55,66}};
//     printf("printing 2-d array:");
// for(row=0;row<2;row++){
//     printf("\n");

// for(col=0;col<3;col++){
// printf("%d \t",arr[row][col]);
// }
// }
// }
// #include<stdio.h>
// int main(){
//     int row,col,arr[2][3]={{11,22,33},{44,55,66}};
//     printf("printing 2-d array:");
//     for(row=0;row<2;row++){
//         printf("\n");
//         for(col=0;col<3;col++){
//             printf("%d \t",arr[row][col]);
//         }
//     }


// }
//multi-dimension array 
//syntax:= datatype array[table][row][col];
// #include<stdio.h>
// int main(){
//     int arr[3][3][3]={
//                 {
//                     {1,2,3},
//                     {4,5,6},
//                     {7,8,9}
//                     },
//                     {
//                     {10,11,13},
//                     {14,15,16},
//                      {17,18,19}             
//                     },
//                     {
//                         {21,22,23},
//                         {15,19,18},
//                         {25,29,24}
//                     }
//     };
//     int row,col,tab;
//     for(tab=0;tab<3;tab++){
//           printf("\n table =%d ",tab);
//       for(row=0;row<3;row++){
//         printf("\n");
//         for(col=0;col<3;col++){
//             printf("%d ",arr[tab][row][col]);
//         }
//        }
//      }
// }
// #include<stdio.h>
// int main(){
//     int row,col,tab;
//     int arr[3][3][3]={
//         {
//        { 1,2,3},
//        {4,5,6},
//        {7,8,9}
//     },
//     {
//         {10,11,12},
//         {13,14,15},
//         {16,17,18}
//     },
//     {
//         {19,20,21},
//         {22,23,24},
//         {25,26,27}
//     },
// };
// for(tab=0;tab<3;tab++){
//     printf("table=%d",tab);
//     for(row=0;row<3;row++);
//     printf("row=%d",row);
    
// }
// }

//sorting array elements in ascending or descending order.
// #include<stdio.h>
// int main(){
//     int arr[5],i,j,temp;
//     printf("Enter array elemets:");
//     for(i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("\n Printing array elements:");
//     for(i=0;i<5;i++){
//         printf("%d \t",arr[i]);
//     }
//     //for sorting array elements;
// printf("\n Array Ascending:");
//     for(i=0;i<5;i++){
//         for(j=0;j<=5;j++){
//             if(arr[i]< arr[j]){
//                 temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     for(i=0;i<5;i++){
//         printf("%d\t",arr[i]); 
//     }
// }
// #include<stdio.h>
// int main(){
//     int arr[5],i,j,temp;
//     printf("Enter array elements:");
//     for(i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     } 
//  printf("printing array elements:");
//  for(i=0;i<5;i++){
//  printf("%d \t",arr[i]);
//  } 
// //for sorting array elements.
// printf("\n array ascending:");
// for(i=0;i<5;i++){
//     for(j=0;j<=5;j++){
//         if(arr[i] < arr[j]){
//         temp=arr[j];
//         arr[j]=arr[i];
//         arr[i]=temp;
//     }
// }
// }
// for(i=0;i<5;i++){
// printf("%d\t",arr[i]);
// }
// }

//transpose of array;
#include<stdio.h>
int main(){
    int r,c,row,col,arr[20][20];
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter columns");
    scanf("%d",&c);

    printf("Enter elements of array1");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    printf("\narray1");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",arr[row][col]);
        }
    }
//transpose of array
printf("\n transpose of array");
    for(col=0;col<c;col++){
        printf("\n"); 
        for(row=0;row<r;row++){
            printf("%d ",arr[row][col]);
        }
    }
}