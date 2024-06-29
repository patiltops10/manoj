//WAP to take 10 no. Input from user find out below values 
//a. How many Even numbers are there 
//b. How many odd numbers are there 
//c. Sum of even numbers 
//d. Sum of odd numbers 

#include<stdio.h>
int main(){
    int numbers [10];
    int evencount=0,oddcount=0;
    int evensum =0,oddsum=0;
int i;
    printf("Enter 10 numbers:\n");

for(i=0;i<=10;i++){
    printf("Enter number %d:",i+1);
    scanf("%d",&numbers[i]);


if(numbers[i] % 2==0){
evencount++;
evensum += numbers[i];
}
  else{
    oddcount++;
    oddsum += numbers[i];
  }
}
printf("\n");

 printf("Number of even numbers: %d\n", evencount);
    printf("Number of odd numbers: %d\n", oddcount);
    printf("Sum of even numbers: %d\n", evensum);
    printf("Sum of odd numbers: %d\n", oddsum);
    return 0;

}


