#include <stdio.h>

void demoint()
{
    int n = 84;
    int m = 43;
    printf("n = %d\nm = %5d\n", n, m);
    printf("n = %d\nm = %05d\n", n, m);
}
void demofloat()
{
    double n = 3.1234567;
    printf("%f\n", n);
    printf("%.2f\n", n);
    printf("%.3f\n", n);
    printf("%10.3f\n", n);
}
void demochr()
{
    char a = 'A';
    printf("A = %d\n", a);
    printf("A = %d %c %x %X %#X %o\n", a,a,a,a,a,a);
    int z = 90;
    printf("z = %d %c\n",z,z);
}
int main()
{
    // demoint();
    // demofloat();
    //demochr();

    return 0;
}