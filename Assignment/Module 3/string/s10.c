//Write a program in C to extract a substring from a given string
#include <stdio.h>

// Function to extract substring
void substring(char source[], char destination[], int start, int length) {
    int i;
    
    
    for (i = 0; i < length && source[start + i] != '\0'; i++) {
        destination[i] = source[start + i];
    }
    destination[i] = '\0'; 
}

int main() {
    char str[100], sub[100];
    int start, length;

    // Prompt user for a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Prompt user for the starting position and length of the substring
    printf("Enter the starting position: ");
    scanf("%d", &start);
    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    // Extract the substring
    substring(str, sub, start, length);

    // Print the extracted substring
    printf("The extracted substring is: %s\n", sub);

    return 0;
}