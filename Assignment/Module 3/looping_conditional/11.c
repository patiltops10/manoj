//11. Accept 5 names from user at run time.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 50

int main() {
    char *names[5]; // Array of pointers to store names
    int i;
 // Displaying the names entered
    printf("\nNames entered:\n");
    for (i = 0; i < 5; ++i) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    // Freeing dynamically allocated memory
    for (i = 0; i < 5; ++i) {
        free(names[i]);
    }

    return 0;
}