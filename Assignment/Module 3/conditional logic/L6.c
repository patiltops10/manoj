#include <stdio.h>

int main() {
    char character;

    // Accepting the character from the user
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Checking if the character is a vowel
    switch (character) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.\n", character);
            break;
        default:
            printf("%c is not a vowel.\n", character);
    }

    return 0;
}
