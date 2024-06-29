 //WAP to show 
//i. Monday to Sunday using switch case 
//ii. Vowel or Consonant using switch case
#include <stdio.h>

int main() {
    int day_number;

    // Input day number (1-7)
    printf("Enter the day number (1-7): ");
    scanf("%d", &day_number);

    // Print corresponding day of the week
    switch(day_number) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number\n");
    }

    return 0;
}
