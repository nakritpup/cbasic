#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct student
{
    char name[20];
    long id;
    float gpa;
    char advisor[20];
    char guardian[20];
};

int main()
{
    int n;
    char name[20];
    int id;
    double gpa;
    char advisor[20];
    char guardian[20];
    struct student *ip;

    printf("Enter number of students: ");
    scanf("%d", &n);

    ip = (struct student*)malloc(n*sizeof(struct student));

    for (int i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s",&name);
        strcpy(ip[i].name,name);
    

        printf("Enter id: ");
        scanf("%ld", &id);
        ip[i].id = id;

        printf("Enter GPA: ");
        scanf("%f", &gpa);
        ip[i].gpa = gpa;

        printf("Enter advisor: ");
        scanf("%s",&advisor);
        strcpy(ip[i].advisor,advisor);

        printf("Enter guardian: ");
        scanf("%s", &guardian);
        strcpy(ip[i].guardian,guardian);

         printf("-------------------------\n");
     }
     for (int j = 0; j < n; j++)
     {
        printf("Name: %s\n", ip[j].name);
         printf("ID: %ld\n", ip[j].id);
         printf("GPA: %.2f\n", ip[j].gpa);
         printf("Advisor: %s\n", ip[j].advisor);
         printf("Guardian: %s\n", ip[j].guardian);
         printf("-------------------------\n");
    }

    return 0;
}
