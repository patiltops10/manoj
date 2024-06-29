//3. WAP to find reverse of string using recursion
#include <stdio.h>
#include <string.h>

// Function prototype
void reverseString(char* str, int start, int end);

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }

    reverseString(str, 0, strlen(str) - 1);
    printf("Reversed string: %s\n", str);

    return 0;
}

// Recursive function to reverse the string
void reverseString(char* str, int start, int end) {
    if (start >= end) {
        return;
    }

    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursively reverse the remaining string
    reverseString(str, start + 1, end - 1);
}