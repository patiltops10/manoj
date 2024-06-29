//C Program to Check Uppercase or Lowercase or Digit or Special 
//Character
#include <stdio.h>
int main() {
    char ch;

    // Accepting a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking if the character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase Alphabet\n", ch);
    }
    // Checking if the character is lowercase
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase Alphabet\n", ch);
    }
    // Checking if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a Digit\n", ch);
    }
    // If the character is not an alphabet or a digit, it's considered a special character
    else {
        printf("%c is a Special Character\n", ch);
    }

    return 0;
}
