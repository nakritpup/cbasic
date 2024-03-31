#include <stdio.h>
void grade(){
    int score;
     
    printf(" Enter score : ");
    scanf("%d", &score);
     
    if(score >= 80 & score <= 100){
        printf("Grade : A");
    }
    else if(score >= 70 & score <=79){
        printf("Grade : B");
    }
    else if(score >= 60 & score<=69){
        printf("Grade : C");
    }
    else if(score >= 50 & score<= 59){
        printf("Grade : D");
    }
    else if(score <=49 & score >=0){
        printf("Grade : F");
    }
    else{
        printf("Error");
    }
}
int main()
{
    grade();
   
    return 0;
}