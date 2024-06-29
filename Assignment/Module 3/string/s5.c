//Write a program in C to compare two strings without using string library
//functions.
//#include<stdio.h>

#include <stdio.h>

// Function to compare two strings
int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Compare characters one by one
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }

    // If both strings are of different lengths
    if (str1[i] != str2[i]) {
        return str1[i] - str2[i];
    }

    return 0; // Strings are equal
}

int main() {
    char str1[100], str2[100];
    int result;

    // Prompt user for first string
    printf("Enter the first string: ");
    scanf("%99s", str1);

    // Prompt user for second string
    printf("Enter the second string: ");
    scanf("%99s", str2);

    // Compare the strings
    result = compareStrings(str1, str2);

    // Display the result
    if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else if (result > 0) {
        printf("The first string is greater than the second string.\n");
    } else {
        printf("Both strings are equal.\n");
    }

    return 0;
}

