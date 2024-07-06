//Write a program in C to extract a substring from a given string
#include <stdio.h>
#include<string.h>
int main(){
    char str[100]="welcome to surat:";
    printf("%s",str);
    printf("\n substring=%s,",strstr(str,"to"));
}