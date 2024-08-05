//percentage of 5 subjects
#include<stdio.h>
int main(){
    int phy,chem,bio,math,english;
    float marks,percentage,total_marks;
    
    printf("Enter obtained of phy marks:");
    scanf("%d",&phy);

    printf("Enter obtained of chem marks:");
    scanf("%d",&chem);

    printf("Enter obtained of math marks:");
    scanf("%d",&math);

    printf("Enter obtained of bio marks:");
    scanf("%d",&bio);

    printf("Enter obtained of english marks:");
    scanf("%d",&english);

total_marks=phy+chem+math+bio+english;
 printf("total marks obtained=%2f\n",total_marks);

 //calculate percentage
percentage= (total_marks/500) * 100;
printf("percentage=%2f\n",percentage);



}