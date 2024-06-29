// // #include<stdio.h>
// // // 2-Dimension array : datatype array_name[row][col];
// // #include<stdio.h>
// // int main(){
// //     int row,col,arr[2][3]={{12,18,16},{74,63,52}};
// //     printf("printing 2-d array");
// //     for(row=0;row<2;row++){
// //         printf("\n");
// //         for(col=0;col<3;col++){
// //             printf("%d \t",arr[row][col]);
// //         }
// //     }
// // }

// #include<stdio.h>
// int main(){
//     int row,col,arr[2][3]={{10,20,25},{18,28,22}};
//     printf("printing 2-d array");
//     for(row=0;row<2;row++){
//         printf("\n");
//         for(col=0;col<3;col++){
//             printf("%d\t",arr[row][col]);
//         }
//     }
// }

#include<stdio.h>

int main(){
    int row,col,arr[7][5]={{75,88,92,8,9,5,5},{78,25,22,44,98,65,12}};

    printf("printing 2-d array elements:");
    for(row=0;row<5;row++){
        printf("\n");
        for(col=0;col<7;col++){
           printf("%d\t",arr[row][col]);
        }
    }

}
