//Write a program in C to find the largest and smallest words in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000

void findLargestAndSmallestWords(char *str, char *smallest, char *largest) {
    char word[MAX_LEN];
    int i = 0, j = 0, minLen = MAX_LEN, maxLen = 0;

    while (str[i] != '\0') {
        // Skip spaces and punctuation
        while (str[i] != '\0' && !isalpha(str[i])) {
            i++;
        }

        // Extract the word
        j = 0;
        while (str[i] != '\0' && isalpha(str[i])) {
            word[j++] = str[i++];
        }
        word[j] = '\0';

        // Check if this word is the smallest or largest
        int wordLen = strlen(word);
        if (wordLen > 0) {
            if (wordLen < minLen) {
                minLen = wordLen;
                strcpy(smallest, word);
            }
            if (wordLen > maxLen) {
                maxLen = wordLen;
                strcpy(largest, word);
            }
        }
    }
}

int main() {
    char str[MAX_LEN];
    char smallest[MAX_LEN], largest[MAX_LEN];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character at the end if present
    str[strcspn(str, "\n")] = 0;

    findLargestAndSmallestWords(str, smallest, largest);

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}