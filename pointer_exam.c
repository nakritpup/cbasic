#include<stdio.h>

int main() {
    char name[8] = "abcdefg";//swap to gdfedcba
    char *ip,*ip2;
    char temp;

    ip = name;
    ip2 = &name[6];
    //printf("%p\n",*ip);
    //printf("%p",*ip2);

    while (ip < ip2) {
        temp = *ip;
        *ip = *ip2;
        *ip2 = temp;
        ip2--;
        ip++;
    
    }
    //printf("%p\n",*ip);
    printf("%s\n",name);

    return 0;
}

