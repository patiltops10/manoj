 //Accept the input month number and print number of days in that 
//month.#include<stdio.h>

int main(){
    int month;
    printf("enter the month no(1-12):");
    scanf("%d",&month);

    //check month is valid.

    if(month < 1 || month > 12){
        printf("month number is not valid!\n");
        return 1;
    }
        // Define an array to store the number of days in each month

int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

       // Display the number of days for the entered month

    printf("Number of days: %d\n", days_in_month[month - 1]);

    return 0; 
}

