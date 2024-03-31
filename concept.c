#include <stdio.h>
void seq()
{
    double celsius, farenheit;
    printf("ender degree in Celsius = ");
    scanf("%lf", &celsius);
    farenheit = (1.8 * celsius) + 32;
    printf("%.2f Celsius = %.2f Farenhit\n", celsius, farenheit);
}
void condition()
{
    int age;
    printf("enter your age = ");
    scanf("%d", &age);
    if (age <= 6)
    {
        printf("you are a kid\n");
        printf("free of charge.\n");
    }
    else
    {
        printf("you are an adult\n");
        printf("199 Baht.\n");
    }
    printf("bye....");
}
void repetition()
{
    int sum = 0;
    int i;
    for (i = 2; i <= 100; i = i + 2)
    {
        printf("%d\n",i);
        sum = sum + i;
    }
    printf("%d\n", sum);
}
int main()
{
    // seq();
    // condition();
    repetition();
    return 0;
}