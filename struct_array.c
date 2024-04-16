#include<stdio.h>
#include<string.h>
struct student{
        char name[20];
        long id;
        float gpa;
        char advisor[20];
        char guardian[20];
    };
int main(){
    struct student s[3];

    strcpy(s[0].name,"Nakrit");
    s[0].id = 36390;
    s[0].gpa = 4.0;
    strcpy(s[0].advisor,"Saitama");
    strcpy(s[0].guardian,"Komkrit");


    strcpy(s[1].name,"Nakorn");
    s[1].id = 37374;
    s[1].gpa = 1.0;
    strcpy(s[1].advisor,"TOD");
    strcpy(s[1].guardian,"UE");

    strcpy(s[2].name,"Saiew");
    s[2].id = 55555;
    s[2].gpa = 3.3;
    strcpy(s[2].advisor,"Saitama");
    strcpy(s[2].guardian,"Raico");
    for(int i = 0;i<3;i++){
        printf("Name: %s\n",s[i].name);
        printf("ID: %d\n",s[i].id);
        printf("GPA: %.2f\n",s[i].gpa);
        printf("Advisor: %s\n",s[i].advisor);
        printf("Guardian: %s\n",s[i].guardian);
        printf("-------------------------\n");
    }
}