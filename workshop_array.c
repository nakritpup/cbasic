#include <stdio.h>

int main()
{
    int month = 1, amount[12];
    int total = 0, avr = 0;

    for (int i = 0; i < 12; i++)
    {
        printf("Month %d: ", month);
        scanf("%d", &amount[i]);
        month++;
        total += amount[i];
    }
    avr = total / 12;
    printf("\nMonth Amount\n=================\n");
    for (int i = 0; i < 12; i++)
    {
        printf("%d       %d\n", i + 1, amount[i]);
    }
    printf("=================\n");
    printf("Total    %d\n", total);
    printf("Average    %d", avr);

    return 0;
}
