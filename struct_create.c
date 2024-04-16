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
// static variable
    char name[20];
    long id;
    float gpa;
    char advisor[20];
    char guardian[20];

// struct
    struct student s1;
    strcpy(s1.name,"Nakrit");
    s1.id = 36390;
    s1.gpa = 4.0;
    strcpy(s1.advisor,"Saitama");
    strcpy(s1.guardian,"Komkrit");

    printf("Name: %s\n",s1.name);
    printf("ID: %d\n",s1.id);
    printf("GPA: %.2f\n",s1.gpa);
    printf("Advisor: %s\n",s1.advisor);
    printf("Guardian: %s\n",s1.guardian);
    printf("-------------------------\n");

    struct student s2;
    strcpy(s2.name,"Nakorn");
    s2.id = 37374;
    s2.gpa = 1.0;
    strcpy(s2.advisor,"TOD");
    strcpy(s2.guardian,"UE");

    printf("Name: %s\n",s2.name);
    printf("ID: %d\n",s2.id);
    printf("GPA: %.2f\n",s2.gpa);
    printf("Advisor: %s\n",s2.advisor);
    printf("Guardian: %s\n",s2.guardian);
    printf("-------------------------\n");
    return 0;
}