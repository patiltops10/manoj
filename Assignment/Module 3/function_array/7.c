#include <stdio.h>

// Function to calculate the length of the string
int stringLength(const char *str);

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = 0;
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
        }
        len++;
    }

    int length = stringLength(str);
    printf("Length of the string is: %d\n", length);

    return 0;
}

// Function to calculate the length of the string
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}