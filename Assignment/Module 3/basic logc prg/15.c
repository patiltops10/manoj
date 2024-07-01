
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void abbreviate(char *name) {
    int length = strlen(name);

    // Print the first character if it's a letter
    if (isalpha(name[0])) {
        printf("%c", toupper(name[0]));
    }

    // Traverse the string and print the uppercase character after each space
    for (int i = 1; i < length; i++) {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c", toupper(name[i + 1]));
        }
    }

    printf("\n");
}

int main() {
    char schoolName[100];

    printf("Enter the school's name: ");
    fgets(schoolName, sizeof(schoolName), stdin);

    // Remove trailing newline character if present
    size_t length = strlen(schoolName);
    if (length > 0 && schoolName[length - 1] == '\n') {
        schoolName[length - 1] = '\0';
    }

    abbreviate(schoolName);

    return 0;
}