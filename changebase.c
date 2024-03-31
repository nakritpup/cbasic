#include <stdio.h>
#include <math.h>
int change_base(int n, int base, int change)
{
    char *result = "";
    char *alp = "0123456789ABCDEF";
    int base10 = 0;
    int ind;
    char str[n];
    if (n == 0)
    {
        return '0';
    }
    if (!(2 <= base <= 16 & 2 <= change <= 16))
    {
        return "Please, Insert base between 2 to 16";
    }
    sprintf(str,"%d",n);
    for (int c = n());
    {
        base10 = base10 * base + strtol(n,change,base);
    }
    while (base10 > 0)
    {
        ind = base10 % change;
        result = alp[ind] + result;
        if (printf("%f",base10)){
            round(base10);
        }
    }
    return result;
}
int main()
{
    change_base(10110, 2, 8);
}