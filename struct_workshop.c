#include <stdio.h>
#include <string.h>

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

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter id: ");
        scanf("%ld", &s[i].id);

        printf("Enter GPA: ");
        scanf("%f", &s[i].gpa);

        printf("Enter advisor: ");
        scanf("%s", s[i].advisor);

        printf("Enter guardian: ");
        scanf("%s", s[i].guardian);

        printf("-------------------------\n");
    }
    for (int j = 0; j < n; j++)
    {
        printf("Name: %s\n", s[j].name);
        printf("ID: %ld\n", s[j].id);
        printf("GPA: %.2f\n", s[j].gpa);
        printf("Advisor: %s\n", s[j].advisor);
        printf("Guardian: %s\n", s[j].guardian);
        printf("-------------------------\n");
    }

    return 0;
}
