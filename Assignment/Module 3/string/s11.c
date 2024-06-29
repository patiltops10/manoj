//Write a program in C to read a sentence and replace lowercase characters with
//uppercase and vice versa.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Prompt user for a sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through each character in the string
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert lowercase to uppercase
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert uppercase to lowercase
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }

    // Print the modified string
    printf("Modified sentence: %s\n", str);

    return 0;
}