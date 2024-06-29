//5. WAP to take two Array input from user and sort them in ascending or 
//descending order as per user’s choice
#include <stdio.h>

// Function prototypes
void sortArray(int array[], int size, int ascending);
void printArray(int array[], int size);

int main() {
    int n, m, choice, order;

    // Taking size of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n);
    int array1[n];

    // Taking elements of the first array
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }

    // Taking size of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &m);
    int array2[m];

    // Taking elements of the second array
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &array2[i]);
    }

    // User's choice for sorting order
    printf("Enter 1 for Ascending order or 2 for Descending order: ");
    scanf("%d", &order);

    if (order == 1) {
        choice = 1; // Ascending order
    } else if (order == 2) {
        choice = 0; // Descending order
    } else {
        printf("Invalid choice. Defaulting to Ascending order.\n");
        choice = 1; // Default to Ascending order
    }

    // Sorting arrays
    sortArray(array1, n, choice);
    sortArray(array2, m, choice);

    // Printing sorted arrays
    printf("Sorted first array: ");
    printArray(array1, n);

    printf("Sorted second array: ");
    printArray(array2, m);

    return 0;
}

// Function to sort the array
void sortArray(int array[], int size, int ascending) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((ascending && array[j] > array[j + 1]) || (!ascending && array[j] < array[j + 1])) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
