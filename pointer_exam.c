#include<stdio.h>
#define SIZE 7

int main() {
    char name[SIZE] = "abcdefg";//swap to gdfedcba
    char *ip,*ip2;
    char temp;

    ip = name;
    ip2 = &name[SIZE-1];
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

