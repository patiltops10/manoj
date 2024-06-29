#include <stdio.h>

int main() {
    int num_students;
    
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    
    
    int total_apples = num_students * 5;
    
    
    printf("Total number of apples required: %d\n", total_apples);
    
    return 0;
}