//task7:
//EEEEE
//DDDD
//CCC
//BB
//A 
#include <stdio.h>

int main() {
    int row, col;
    char ch='E';

    for (row = 5; row >= 1; row--) {
    
        for (col = 1; col <= row; col++) {
            printf("%c", ch);
        }
        ch--;
        
        printf("\n");
    }

    return 0;
}
