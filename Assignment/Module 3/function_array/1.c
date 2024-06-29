#include <stdio.h>


int find_max(int arr[], int size) {
    if (size == 0) {
        
        return -1;
    }

    int max_num = arr[0]; 

    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_num) {
            max_num = arr[i]; 
        }
    }

    return max_num; 
}

int main() {
    int array[] = {18,45,22.50,25,35,30,48,52};
    int size = sizeof(array) / sizeof(array[0]);

    
    int maximum = find_max(array, size);

    if (maximum != -1) {
        printf("The maximum number in the array is: %d\n", maximum);
    } else {
        printf("Array is empty. No maximum number.\n");
    }

    return 0;
}
