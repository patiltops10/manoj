//Write a program in C to find the number of times a given word 'is' appears in
//the given string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to count occurrences of a word in a string
int countOccurrences(char *str, char *word) {
    int count = 0;
    int wordLen = strlen(word);
    int strLen = strlen(str);
    
    // Traverse the string
    for (int i = 0; i <= strLen - wordLen; i++) {
        // Check if the substring matches the word 'word'
        if (strncmp(&str[i], word, wordLen) == 0) {
            // Check word boundaries
            if ((i == 0 || !isalnum(str[i - 1])) && // check before the word
                (i + wordLen == strLen || !isalnum(str[i + wordLen]))) { // check after the word
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    char str[1000];
    char word[] = "is";
    int occurrences;

    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Convert 'word' to lowercase for case insensitive search
    // You may remove this part if case sensitivity is needed
    for (int i = 0; word[i]; i++) {
        word[i] = tolower(word[i]);
    }
    
    // Convert 'str' to lowercase for case insensitive search
    // You may remove this part if case sensitivity is needed
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }

    // Count occurrences of 'word' in 'str'
    occurrences = countOccurrences(str, word);

    // Print the result
    printf("The word '%s' appears %d times in the given string.\n", "is", occurrences);

    return 0;
}