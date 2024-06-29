#include <stdio.h>

int main() {
    int ascii_value;
    
    printf("Enter ASCII value: ");
    scanf("%d", &ascii_value);
    
    printf("Character corresponding to ASCII value %d is: %c\n", ascii_value, ascii_value);
    
    return 0;
}