//Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>
#include <ctype.h>

// Function to remove non-alphabet characters from a string
void removeNonAlphabets(char *str) {
    int i = 0, j = 0;
    
    while (str[i]) {
        // Check if the character is an alphabet
        if (isalpha(str[i])) {
            str[j++] = str[i]; // Keep the alphabet character
        }
        i++;
    }
    str[j] = '\0'; // Null-terminate the string after removing non-alphabets
}

int main() {
    char str[1000];

    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Remove non-alphabet characters from the string
    removeNonAlphabets(str);

    // Print the modified string
    printf("String after removing non-alphabet characters: %s\n", str);

    return 0;
}