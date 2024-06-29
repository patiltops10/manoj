// //string
// #include<stdio.h>
// int main(){
//     char str[50];
//     puts("Enter any string:");
//     gets(str);//input
//     puts(str);//output

//     return 0;
// }

//string
// #include<stdio.h>
// #include<string.h>//predefined function
// int main(){
//     char str[50];
//     puts("Enter any string:");
//     gets(str);//input
//     puts(strupr(str));//output

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>//predefined function
// int main(){
//     char str[50];
//     puts("Enter any string:");
//     gets(str);//input
//     puts(strlwr(str));//output

//     return 0;
// }


// #include<stdio.h>
// #include<string.h>//predefined function
// int main(){
//     char str[50];
//     puts("Enter any string:");
//     gets(str);//input
//     puts(strrev(str));//output

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>//predefined function
// int main(){
//     char str[50];
//     puts("Enter any string:");
//     gets(str);//input
//     printf("%d",strlen(str));//output

//     return 0;

// }

// #include<stdio.h>
// #include<string.h>//predefined function
// int main(){
//     char str[50],str2[40];
//     puts("Enter any string:");
//     gets(str);//input
//     strcpy(str2,str);
//     puts(str2);//output

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>//predefined function
// int main(){
//     char str[50],str2[40];
//     printf("Enter any string:");
//     gets(str);//input
//     printf("Enter any string2:");
//     gets(str2);//input
// if(strcmp(str,str2)==0){
//     printf("Both strings are equal:");
// }

//  else{

//    printf("Both strings are not equal:");
// }
   
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>//predefined function
// int main(){
//     char str[50],str2[40];
//     printf("Enter any string:");
//     gets(str);//input
//     printf("Enter any string2:");
//     gets(str2);//input

// strcat(str,str2);
// printf(str);
   
//     return 0;
// }

#include<stdio.h>
 #include<string.h>//predefined function
 int main(){
     char str[50];
    puts("Enter any string:");
     gets(str);//input
     printf("%d",strlen(str));//output

    return 0;

 }
//string palindrome
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int len=0,i,r=0;
    printf("Enter string:");
    gets(str);
    len=strlen(str);
    for(i=0;i<len/2;i++){
    if(str[i]==str[len-i-1]){
        r++;
    }

}
if(r==len/2) {
    printf("%sis a palindrome\n",str);
}else{
    printf("%s is not a palindrome\n",str);
}
}










