//goto statement.
//goto statements:
// loop(){
    //goto label_name;
//}
//label_name:
// execution part;

#include<stdio.h>

// int main(){
//     int i,sum=0;
//     for(i=0;i<=10;i++){
//         sum=sum+i;
//         if(i==5){    
//             goto add;
//         }
//     }
//     add:
//         printf("Sum=%d",sum);
// }

#include<stdio.h>
int main(){
    int sum=0,i;
    for(i=0;i<10;i++){
        sum=sum+i;
        if(i==5){
            goto add;
        }
        
    }
    add:
      printf("sum=%d",sum);
}