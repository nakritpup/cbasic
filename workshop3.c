#include <stdio.h>
void multiplication()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int sum = 0;
    int i = 1;
    int mul;
    for (i = 1; i <= 12; i = i + 1)
    {
        sum = sum + 1;
        mul = n * sum;
        printf("%d x %d = %i\n", n, sum, mul);
    }
}
int main()
{
    multiplication();
    return 0;
}