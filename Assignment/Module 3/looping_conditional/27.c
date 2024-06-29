// 1 2 3 6 9 18 27 54...
#include <stdio.h>

int main() {
    int n, i;
    
    // Read the value of n from the user
    printf("Enter the number of terms to generate: ");
    scanf("%d", &n);

    // Array to store the sequence
    int sequence[n];

    // Initialize the first three terms
    sequence[0] = 1;
    sequence[1] = 2;
    sequence[2] = 3;

    // Generate the sequence
    for (i = 3; i < n; i++) {
        if (i % 2 == 0) {
            sequence[i] = sequence[i-1] * 3;
        } else {
            sequence[i] = sequence[i-1] * 2;
        }
    }

    // Print the sequence
    printf("The sequence is: ");
}
