//30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the 
//minimum bill should be of Rs. 256/-

#include<stdio.h>
int main(){
    int bill,charge;

printf("Enter bill:");
scanf("%d",&bill);
if(bill>=256&&bill<=800){
 printf(" no charge will be added");
 printf("\n bill amount:%d",bill);

}

else if(bill>=800){
charge=bill*0.18;
printf("\n bill amount:%d",bill+charge);
printf("\ncharge will be added");
}

else{
printf("minimum bill should be of rs.256");
}

}
