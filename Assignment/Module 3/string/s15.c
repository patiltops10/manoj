// // //Write a program in C to find the largest and smallest words in a string.
// #include<stdio.h>
// #include<string.h>
// #include <ctype.h>
// int main(){
//     char str[100];
//     int len;
//     int i,j;
//     char largest[20],smallest[20],word[20];
    
//     printf("Enter string:");
//     gets(str);

//     len=strlen(str);

//     for(i=0;i<len;i++){

//         while(i<len && !isspace(str[i])){
//             word[j++] = str[i++];
//         }
//         word[j] = '\0';

//         if( strlen(word) > strlen(largest) ){
//             strcpy(largest, word);
//         }

//         if( strlen(smallest) == 0 || strlen(word) < strlen(smallest) ){
//             strcpy(smallest, word);
//         }

//         j=0;
//       }

//     puts(smallest);
//     puts(largest);
//     //   printf("\n%s",smallest);
//     //   printf("\n%s",largest);

// }

// 15. Write a program in C to find the largest and smallest words in a string. 

#include <stdio.h>
#include <ctype.h>
#include <string.h>
void main(){

    int i, j, len;
    char str[100], largest[20], smallest[20], word[20];

    printf("\nEnter String: ");
    gets(str);

    len = strlen(str);

    for(i=0; i<len; i++){

         for(j=0; i<len && !isspace(str[i]); j++, i++){
             word[j] = str[i];
         }
         word[j] = '\0';

        while(i<len && !isspace(str[i])){

            word[j++] = str[i++];
        } 
        word[j] = '\0';

        if( strlen(word) > strlen(largest) ){
            strcpy(largest, word);
        }

        if( strlen(smallest) == 0 || strlen(word) < strlen(smallest) ){
            strcpy(smallest, word);
        }

        j=0;
    

    
    
    
}
printf("\nLargest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);
}