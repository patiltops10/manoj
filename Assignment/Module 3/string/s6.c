//Write a program in C to count the total number of alphabets, digits and special
//characters in a string.
#include <stdio.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, specialChars = 0;
    int i = 0;

    
    printf("Enter a string: ");
    gets(str);

    
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] != '\n') {
            specialChars++;
        }
        i++;
    }

    
    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", specialChars);

    return 0;
}