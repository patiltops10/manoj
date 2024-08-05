//funcion

//def =block of code that performs perticulaar task
//it can be use multtiple times
//increase code reusability
//#include<stdio.h>
//declaration
// void printhello();//function call
// int main(){
// printhello();
// printhello();
// printhello();
// }
// //function definition
// void printhello(){
//     printf("hello:\n");
//     printf("my name is manoj:\n");
// }
//#include<stdio.h>

// void printhello();//function call
// void printgoodbye();

// int main(){
// printhello();
// printgoodbye();
// }

// //function definition
// void printhello(){
//     printf("hello:\n");
// }  
//     void printgoodbye(){
//      printf("good bye:\n");
// }
//write afunction that points namaste if user i indian & bonjour if the user is french.
#include <stdio.h>

int main(){
  
printf("Enter f for french & i for indian:");
char ch;
    scanf("%c",&ch);

    if(ch == 'i'){
       printf("namaste:");
    }

     else {
      printf("bonjour:");
    }
    return 0;
}
    void printnamaste(){
        printf("namaste:\n");

    }
    void printbonjour(){
        printf("bonjour:\n");
    }

//types of function
//1.library function
//2.user defined function

