// use switch case condition.
#include<stdio.h>

int main(){
    int Day;
    printf("Enter day 1 to 7:");
    scanf("%d",&Day);

    switch (Day){
        case 1: printf("monday\n");
                break;
        case 2: printf("tuesday\n");
                break;
        case 3: printf("wednesday\n");
                break;
        case 4: printf("thursday\n");
                break;
        case 5: printf("friday\n");
                break;
        case 6: printf("saturday\n");
                break;
        case 7: printf("sunday\n");
                break;
    default: printf("not valid day:");
    }
}