#include <stdio.h>

int main(){
    int grade;
    printf("Enter your grade : ");
    scanf("%d",&grade);

    if(grade>=80)printf("Grade : A\n");
    else if(grade>=70)printf("Grade : B\n");
    else if(grade>=60)printf("Grade : C\n");
    else if(grade>=50)printf("Grade : D\n");
    else printf("Grade : F\n");

    switch(grade){
    case 80:
        printf("Grade : A\n");
        break;
    case 70:
        printf("Grade : B\n");
        break;
    case 60:
       printf("Grade : C\n");
    case 50:
        printf("Grade : D\n");
    default:
        printf("Grade : F\n");
    }
    return 0;
}