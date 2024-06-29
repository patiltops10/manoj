//passing parameter in function as structure
#include<stdio.h>
struct student{
    int rollno;
    char name[5];  
    float marks[4];
};

int stud_details(struct student s){
    printf("\n student details:");
    printf("\nrollno:=%d,s.rollno");
    printf("\n name=%s",s.name);
    for(int i=0;i<4;i++){
    printf("\n marks+%f",s. marks[i]);
}

}
int main(){
    struct student s1;//student variable
    printf("Enter rollno:");
    scanf("%d",s1.rollno);
    printf("Enter name:");
    scanf("%s",&s1.name);
    for(int i=0;i<4;i++){
    printf("Enter marks:");
    scanf("%f",&s1.marks[i]);
    }
    stud_details(s1);
}