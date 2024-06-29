/*
19. Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow : 
            Unit                  Charge/unit 
upto 350                            @1.20 
350 and above but less than 600     @1.50 
600 and above but less than 800     @1.80 
800 and above                       @2.00 */
#include<stdio.h>
int main(){

    int id,unit,pay_amount;
    char name[100];
    printf("Enter id:");
    scanf("%d",&id);

    printf("Enter name:");
    scanf("%c",&name);
    gets(name);

    printf("Unit consumed by user:");
    scanf("%d",&unit);

    if(unit<=350){
       pay_amount=unit*1.20;
       printf("\n amount to be paid:%d",pay_amount);
    }
    else if(unit>=350||unit<=600){
        pay_amount=unit*1.5;
    printf("\n amount to be paid:%d",pay_amount);
    }
    else if(unit>=600||unit<=800){
        pay_amount=unit*1.80;
        printf("\n amount to be paid:%d",pay_amount);
    }

}    




